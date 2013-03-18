#include <sys_config.h>

#include <retcode.h>
#include <types.h>

#include <api/libc/alloc.h>
#include <api/libc/printf.h>
#include <api/libc/string.h>
#include <osal/osal.h>
#include <hal/hal_gpio.h>
#include <hld/hld_dev.h>
#include <hld/pan/pan.h>
#include <hld/pan/pan_dev.h>

/***********************************************************************************************************************
*
*                                  CT1642 Driver  2.2-----The C source file
*
*    ���ļ�ΪCT1642�Ĳο���������
*    ��������9��������ɣ�����6��Ϊ�ӿں�������������:
*
*    1��fp_ct1642_manage()----�˺���Ϊ����������һ��ͨ��TASK�����ϵĵ����������LED�Ķ�̬ɨ��Ͱ���ɨ�衣һ������£�
*4λ�������Ҫ4ms����һ�Σ�3λ�������Ҫ5ms����һ�Ρ������ʾЧ�����ѣ��ɽ����ü��ʱ���С1ms.
*
*    2��fp_led_data_translate()----�˺�����Ƶ��ת����������8λ��������ת������Ӧ����ʾ���룬һ����Ƶ�����¡�������ʾƵ��
*Ƶ��ʱ���ã�ת�����ݴ�ȡ��ȫ�ֱ���v_LedCode[]���У�������fp_ct1642_manage()����
*
*    3��fp_led_string_translate()----�˺������ַ�ת������,��Ԥ�ȶ����"�ַ���ʾ����"���͸��ú���������������ʾ����Ĳ�ͬ��
*ȫ�ֱ���v_LedCode[]������Ӧ��ֵ��������fp_ct1642_manage()����
*
*    4��fp_led_display_off()----�ر������ʾ������
*
*    5��fp_lock_led_on()----���ź������ƺ�����
*
*    6��fp_lock_led_off()----�ر��ź������ƺ�����
*
*
*    �޸Ĳο�����:
*    1���޸�"Ӳ����Դ��������"�ĳ���LED_BIT_COUNT���壬ȷ��LED����ܵ�λ����
*
*����2�����"Ӳ����Դ��������"�ĺ�GPIO_CLOCK_SET(val)��GPIO_DATA_SET(val)��GPIO_KEY_GET(val)��
*
*����3���޸�"ȫ�ֱ�������"��INT8U��ȷ��INT8UΪ8λ�޷������͡�
*
*����4��ȷ�����ú���fp_led_data_translate()λ�ã����Ƶ������ʾ�����ת����
*
*����5��ȷ�����ú���fp_led_string_translate()λ�ã������ʾ�ַ�����ʾ�����ת����
*
*����6������һ��TASK����Ҫ�����fp_ct1642_manage()�������õ��İ���ֵv_KeyValue���ظ�ϵͳ��
*
***********************************************************************************************************************/



/***********************************************************************************************************************
*                                     ��������Ӷ���                                                                   
*                                                                                                                      
*��  �˴��������������(A��B��C��D��E��F��G��H)��CT1642����(Q2��Q3��Q4��Q5��Q6��Q7��Q8��Q9)�����ӣ���Ҫ���ݲ�ͬ��Ӳ����
*·����Ӧ���޸ģ���Ҫ�޸�0-7��8�����ֵ�˳��ʹ�����ǹ�˾��DEMO��˴�����Ҫ�޸ġ�
***********************************************************************************************************************/
#if 0
#define BIT_A (1<<7)    /*          A           Q2��Ӧ7�� ���б�ʾQ2�������A*/
#define BIT_B (1<<6)    /*       -------        Q3��Ӧ6�� ���б�ʾQ3�������B*/
#define BIT_C (1<<5)    /*      |       |       Q4��Ӧ6�� ���б�ʾQ4�������C*/
#define BIT_D (1<<4)    /*    F |       |  B    Q5��Ӧ4�� ���б�ʾQ5�������D*/
#define BIT_E (1<<3)    /*       ---G---        Q6��Ӧ3�� ���б�ʾQ6�������E*/
#define BIT_F (1<<2)    /*      |       |  C   	Q7��Ӧ2�� ���б�ʾQ7�������F*/
#define BIT_G (1<<1)    /*    E |       |	Q8��Ӧ1�� ���б�ʾQ8�������G*/
#define BIT_P (1<<0)    /*       ---D---   P    Q9��Ӧ0�� ���б�ʾQ9�������P*/
#else
#define BIT_A (1<<0)    	/*          A           	*/
#define BIT_B (1<<1)    /*       -------        	*/
#define BIT_C (1<<2)    /*      |       |       	*/
#define BIT_D (1<<3)    /*    F |       |  B    	*/
#define BIT_E (1<<4)    /*       ---G---       	*/
#define BIT_F (1<<5)    /*      |       |  C   	*/
#define BIT_G (1<<6)    /*    E |       |		*/
#define BIT_P (1<<7)    /*      ---D---   P    	*/
#endif


/***********************************************************************************************************************
*                                     �������ʾ���붨��                                                     
*                                                                                                                      
*���˴�����LED�������ʾ���룬�����ڹ���������ܣ�����Ҫ�޸ġ�
***********************************************************************************************************************/
#define DATA_0  BIT_A|BIT_B|BIT_C|BIT_D|BIT_E|BIT_F
#define DATA_1  BIT_B|BIT_C
#define DATA_2  BIT_A|BIT_B|BIT_D|BIT_E|BIT_G
#define DATA_3  BIT_A|BIT_B|BIT_C|BIT_D|BIT_G
#define DATA_4  BIT_B|BIT_C|BIT_F|BIT_G
#define DATA_5  BIT_A|BIT_C|BIT_D|BIT_F|BIT_G
#define DATA_6  BIT_A|BIT_C|BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_7  BIT_A|BIT_B|BIT_C
#define DATA_8  BIT_A|BIT_B|BIT_C|BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_9  BIT_A|BIT_B|BIT_C|BIT_D|BIT_F|BIT_G
#define DATA_A  BIT_A|BIT_B|BIT_C|BIT_E|BIT_F|BIT_G 
#define DATA_b  BIT_C|BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_C  BIT_A|BIT_D|BIT_E|BIT_F
#define DATA_c  BIT_D|BIT_E|BIT_G
#define DATA_F  BIT_A|BIT_E|BIT_F|BIT_G 
#define DATA_I  BIT_E|BIT_F
#define DATA_i  BIT_E
#define DATA_n  BIT_C|BIT_E|BIT_G 
#define DATA_N  BIT_A|BIT_B|BIT_C|BIT_E|BIT_F 
#define DATA_o  BIT_C|BIT_D|BIT_E|BIT_G
#define DATA_t  BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_e  BIT_A|BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_u  BIT_B|BIT_C|BIT_D|BIT_E|BIT_F
#define DATA_DARK 0x00
#define DATA_E  BIT_A|BIT_D|BIT_E|BIT_F|BIT_G
#define DATA_P  BIT_A|BIT_B|BIT_E|BIT_F|BIT_G
#define DATA_r  BIT_E|BIT_G
#define DATA_S  BIT_A|BIT_F|BIT_G|BIT_C|BIT_D
#define DATA_O  BIT_A|BIT_B|BIT_C|BIT_D|BIT_E|BIT_F
#define DATA_DOT  BIT_P
#define DATA_H BIT_B|BIT_C|BIT_E|BIT_F|BIT_G


/***********************************************************************************************************************
*                                     �ַ���ʾ���붨��                                                     
*                                                                                                                      
*���˴�����LED������ַ���ʾ���룬�ɸ�����Ҫ������Ӧ���ݣ����ں���fp_led_string_translate()������Ӧʵ�֡�
***********************************************************************************************************************/
/*�����ַ�����ʾ�ַ�����*/
#define LED_ON        0x01
#define LED_OFF      0x02
#define LED_BOOT    0x04
#define PANEL_OFF  0x08

#define KEY_GPIO_PIN		28
#define DATA_GPIO_PIN		26
#define CLK_GPIO_PIN		27

typedef unsigned char  INT8U;				/*���Ͷ��壬�����ƽ̨�����޸ģ�ȷ��INT8UΪ�޷���8λ��������*/ 

/*�ڲ�����*/
static void     pan_ct1642_led_scan(UINT32 param,INT8U v_position);						       /*LEDɨ�������*/
static void     pan_ct1642_send_bit_data(INT8U v_character, INT8U v_position); 	/*����1λLED��������ݺ���*/
static INT8U  pan_ct1642_key_scan(UINT32 param);					       /*����ɨ�������*/

static void pan_ct1642_set_gpio(int gpio_pin,UINT8 val);
static void pan_ct1642_get_gpio(int gpio_pin,UINT8 *val);


/***********************************************************************************************************************
*                                     Ӳ����Դ��������                                                     
*                                                                                                                      
*���˴�����CT1642ʹ�õ���Դ����������ݲ�ͬƽ̨����Ӧ�޸�
***********************************************************************************************************************/
/*����LED ����ܵ�λ����������ֻʵ��3λ��4λ�Ĳ���������LED_BIT_COUNT��ֵֻ����3��4*/
#define  LED_BIT_COUNT        4  

/*����˿�CLOCK��������valΪTRUEʱ��CLOCK�˿���1����valΪFALSEʱ��CLOCK�˿���0*/
#define  GPIO_CLOCK_SET(val)	pan_ct1642_set_gpio(CLK_GPIO_PIN ,val)

/*����˿�DATA��������valΪTRUEʱ��DATA�˿���1����valΪFALSEʱ��DATA�˿���0*/
#define  GPIO_DATA_SET(val)	pan_ct1642_set_gpio(DATA_GPIO_PIN,val);

/*�����ȡ�˿�KEY��ƽ���������˿�KEYΪ�ߵ�ƽʱ��val��1�����˿�KEYΪ�͵�ƽʱ��val��0*/
#define  GPIO_KEY_GET(val) pan_ct1642_get_gpio(KEY_GPIO_PIN,&val);

#define KEY_BIT_COUNT		8


/***********************************************************************************************************************
*                                     ����ֵ����                                                     
*
*    �˴����尴����ֵ���ɸ��ݲ�ͬƽ̨��Ҫ�޸Ĵ�ֵ��
***********************************************************************************************************************/

#define STB_KEY_MENU    0xFFFF0002
#define STB_KEY_OK         0xFFFF0004
#define STB_KEY_RIGHT    0xFFFF0080 
#define STB_KEY_LEFT      0xFFFF0040
#define STB_KEY_UP         0xFFFF0010
#define STB_KEY_DOWN    0xFFFF0020
#define STB_KEY_NULL      0x00 
/*
#define STB_KEY_MENU     0xFFFF0020
#define STB_KEY_OK         0xFFFF0080
#define STB_KEY_RIGHT    0xFFFF0004 
#define STB_KEY_LEFT      0xFFFF0040
#define STB_KEY_UP         0xFFFF0010
#define STB_KEY_DOWN    0xFFFF0008
#define STB_KEY_NULL      0x00 
*/

#if 0
#define CT1642_PRINT libc_printf
#else
#define CT1642_PRINT(...) do{}while(0)
#endif

typedef struct pan_ct1642_info_
{
	struct pan_hw_info *hw_info;
	int					bitmap_len;
	struct led_bitmap  *bitmap_list;
	UINT8				dis_buff[8];
	UINT32				dis_id;
	UINT8				led_buff;
	UINT8				dotmap;
	UINT8				colonmap;
	UINT8				blankmap;
	UINT32				cnt_repeat_first;
	UINT32				cnt_repeat;
	UINT32				key_cnt;			/* Continue press key times */
	UINT32				keypress_cnt;		/* Continue press key counter */
	UINT32 				keypress_intv;		/* Continue press key interval */
	UINT32 				keypress_num;		/* Pressed key COM index saver */
	UINT32				keypress_bak;		/* Pressed key saver */
} pan_ct1642_info;

static pan_ct1642_info pan_ct1642_data;

struct led_bitmap bitmap_table_ct1642[] =
{
	{'.', DATA_DOT},// Let's put the dot bitmap into the table 
	{'0', DATA_0}, {'1', DATA_1}, {'2', DATA_2}, {'3', DATA_3},
	{'4', DATA_4}, {'5', DATA_5}, {'6', DATA_6}, {'7', DATA_7},
	{'8', DATA_8}, {'9', DATA_9}, {'a', DATA_A}, {'A', DATA_A}, 
	{'b', DATA_b}, {'B', DATA_b}, {'c', DATA_c}, {'C', DATA_C},
	{'e', DATA_e}, {'E', DATA_E}, 	{'f', DATA_F}, {'F', DATA_F},
	{'i', DATA_i},   {'I', DATA_I}, 	{'n', DATA_n}, {'N', DATA_N}, 
	{'o', DATA_o}, {'O', DATA_O}, {'p', DATA_P}, {'P', DATA_P}, 
	{'r', DATA_r}, {'R', DATA_r}, {'s', DATA_S}, {'S', DATA_S},
	{'t', DATA_t}, {'T', DATA_t}, {'u', DATA_u}, {'U', DATA_u},
	{'h', DATA_H}, {'H', DATA_H}, 
	{':', 0x80}, {'-', 0x40}, {'_', 0x08}, {' ', DATA_DARK},
};

#define PAN_CT1642_CHAR_LIST_NUM sizeof(bitmap_table_ct1642)/sizeof(struct led_bitmap)

static UINT8 locked_flag =0;/*1:signal is locked 0 :signal is unlock*/
static UINT8 standby_flag =0; /*1:is standby status; 0:is nomal status*/
static UINT8 mail_flag = 0; /*1:have unread mail,0:have no unread mail*/
static UINT8 WIFI_flag = 0; /*1: open wifi, 0: close wifi*/

/* Name for the panel, the last character must be Number for index */
static char  pan_ct1642_name[HLD_MAX_NAME_SIZE] = "PAN_CT1642_0";


/***********************************************************************************************************************
*�������ƣ�fp_send_bit_data()
*����˵����CT1642���ݷ��ͺ���
*���������v_character, v_position
*���ز�����NULL
*�������ܣ��ú��������1λLED�������ʾ���뷢�͵�CT1642���У�����ʾ������Ҳ������ת����
***********************************************************************************************************************/
static void pan_ct1642_send_bit_data(INT8U v_character, INT8U v_position)
{
	INT8U BitPosition ;                               /*�洢�����λ�ñ���*/
	INT8U BitCharacter = v_character;     /*�洢�������ʾ����*/
	INT8U i;

	//CT1642_PRINT("\n data:0x%x,pos=%d",v_character,v_position);
	
	switch(v_position)
	{
		case 0: 
		{/*��ʾ��ǧλ����,v_lock���ź�������־λ��Ϊ*/
			/*1ʱ�źŵ�D2����,Ϊ0ʱ�źŵƲ�������������*/
			BitPosition=0x7f; 
			if(locked_flag)
			{
				BitCharacter|=BIT_P;
			}
			else
			{
				BitCharacter &= ~BIT_P;
			}
			break; 
		}                    
		
		case 1: 
			{/*��ʾ�ڰ�λ����,*/
				BitPosition=0xbf;
				break;
			} 
		case 2: 
			{/*��ʾ��ʮλ����                           */
				BitPosition=0xdf;
				if(mail_flag)
				{
					BitCharacter|=BIT_P;
				}
				else
				{
					BitCharacter &= ~BIT_P;
				}
				break;
			}                                                         
		case 3:
			{  /*��ʾ�ڸ�λ����                           */
				BitPosition=0xef; 
				if(WIFI_flag)
				{
					BitCharacter|=BIT_P;
				}
				else
				{
					BitCharacter &= ~BIT_P;
				}
				break;
			}                                                       
		case 4: 
			{/*�ر���ʾ�����ڼ���ɨ��                   */
				BitPosition=0xff; 
				break;
			}                                                         
		default:
			{ /*Ĭ�ϲ���ʾ                               */
				BitPosition=0xff; 
				BitCharacter=0x00;
			}                                      
	}

	for(i=0;i<4;i++)                   /*����8λ��ַ*/
	{
		GPIO_CLOCK_SET(FALSE);
		if( (BitPosition<<i)&0x80)
		{
			GPIO_DATA_SET(TRUE);
		}
		else
		{
			GPIO_DATA_SET(FALSE);
		}
		GPIO_CLOCK_SET(TRUE);
	}	
	for(i=0;i<6;i++)   
	{
	GPIO_DATA_SET(TRUE);      /*����������λ*/
	GPIO_CLOCK_SET(FALSE);
	GPIO_CLOCK_SET(TRUE);
	}	

	for(i=0;i<8;i++)                    /*����8λ����*/
	{
		GPIO_CLOCK_SET(FALSE);
		if( (BitCharacter<<i) & 0x80)
		{
			GPIO_DATA_SET(TRUE);
		}
		else
		{
			GPIO_DATA_SET(FALSE);
		}
		GPIO_CLOCK_SET(TRUE);
	}
	GPIO_DATA_SET(FALSE); 		/*�������*/
	GPIO_DATA_SET(TRUE);
	
	GPIO_CLOCK_SET(FALSE);
	GPIO_DATA_SET(FALSE);
	GPIO_DATA_SET(TRUE);
}


static UINT32 pan_ct1642_getKeyCode(INT8U index)
{
	UINT32 v_key=STB_KEY_NULL;
	switch(index)
	{
		case 0x00:
			v_key=STB_KEY_MENU;
			break;
		case 0x01:
			v_key=STB_KEY_OK;
			break;
		case 0x02:
			v_key=STB_KEY_UP;
			break;
		case 0x03:
			v_key=STB_KEY_DOWN;
			break;
		case 0x04:
			v_key=STB_KEY_RIGHT;
			break;
		case 0x05:
			v_key=STB_KEY_LEFT;
			break;
		default:
			break;
	}
	//libc_printf("index=%d,v_key=0x%x,DATA_N=0x%x\n",index,v_key,DATA_N);

	//libc_printf("\n v_key=0x%x\n",v_key);
	return v_key;
}

/***********************************************************************************************************************
*�������ƣ�fp_led_scan()
*����˵����LED��ʾ������
*���������v_position
*���ز�����NULL
*�������ܣ��ú���ʵ��LED����ܵ�ɨ�������ǰ�Ĺ���ֻ�Ǽ򵥵Ĵ�ֵ��fp_send_bit_data()��ʵ�ֶ�̬ɨ����ʾ��Ҳ�����޸����
*		   ������ʵ�ָ���Ĺ��ܣ������Ƶ����ת���������ַ���ת������������������������õȣ���������:
*          INT8U v_DisValue=0;
*          INT8U v_DisControl=0;
*          static void pan_ct1642_led_scan(UINT32 param,INT8U v_position)
*          {
*             if(v_DisControl==0)
*               {
*                  fp_led_data_translate(v_DisValue);
*               }
*              else
*               {
*                 fp_led_string_translate(v_DisValue);
*               }
*              pan_ct1642_send_bit_data(v_LedCode[v_position],v_position);
*              return;
*          }
***********************************************************************************************************************/
static void pan_ct1642_led_scan(UINT32 param,INT8U v_position)
{
	struct pan_device *dev = (struct pan_device *)param;
	pan_ct1642_info *tp = (pan_ct1642_info *)dev->priv;
	static UINT8 test_init = 0;
	osal_interrupt_disable();	
	pan_ct1642_send_bit_data(tp->dis_buff[v_position],v_position);
	osal_interrupt_enable();	
}
//DATA_n DATA_O DATA_C DATA_H

/***********************************************************************************************************************
*�������ƣ�fp_key_scan()
*����˵��������������
*���������NULL
*���ز�����nKeyPress
*�������ܣ��ú�������ʵ�ְ���ɨ�裬���м�����ʱ�����ذ���ֵ�����򷵻�STB_KEY_NULL��
***********************************************************************************************************************/
static INT8U pan_ct1642_key_scan(UINT32 param)
{
	struct pan_key key;
	INT8U i;
	INT8U nKeyPress = 0;					 /*��ǰ����״ֵ̬*/
	static INT8U pKeyPress = 0;			 /*ǰһ����״ֵ̬*/
	static INT8U KeyCount = 0;				 /*ѭ������ֵ*/
	struct pan_device *dev = (struct pan_device *)param;
	pan_ct1642_info *tp = (pan_ct1642_info *)dev->priv;
	UINT32 key_code =0;

	osal_interrupt_disable();	
	pan_ct1642_send_bit_data(0xff,0x04); 
	GPIO_KEY_GET(nKeyPress); 			                     /*��ȡ����KEY�ĵ�ƽֵ*/
	osal_interrupt_enable();
	
	if((1==nKeyPress)&&(0==pKeyPress)) 	                     /*�а�������*/
	{
		for(i=0;i<8;i++)                                              /*��ѯ����ֵ*/
		{
			osal_interrupt_disable();	
			pan_ct1642_send_bit_data(1<<i,0x04);
			GPIO_KEY_GET(nKeyPress); 
			osal_interrupt_enable();
			
			if(1==nKeyPress)
			{
				pKeyPress=1;
				nKeyPress=0;
				key.type = PAN_KEY_TYPE_PANEL;
				key.state = PAN_KEY_PRESSED;
				key_code=pan_ct1642_getKeyCode(i);
				key.count = 0;
				key.code = key_code;
				pan_buff_queue_tail(&key);
				return i;
			}
		}
		return (INT8U)STB_KEY_NULL;
	}	
	else if((1==nKeyPress)&&(1==pKeyPress))                       /*�а�����������*/
	{
	       KeyCount++;						                 /*����ס����ʱ����������������*/
		if(KeyCount==0x10)				                 /*�״ΰ�����ʱ�ϳ���KeyCount��0�ӵ�0x10���ٴ�0x90�ӵ�0xaf*/
		{
			KeyCount=0x90;
		}
		else if(KeyCount==0xaf)			                 /*�Ժ�ÿ�ν϶̣�KeyCount��0x90�ӵ�0xaf*/
		{
			KeyCount=0x90;
			pKeyPress=0;
		}
		return (INT8U)STB_KEY_NULL;
	}	
	else if((0==nKeyPress)&&(1==pKeyPress))	                  /*�а����ɿ�*/
	{
		pKeyPress=0;
		KeyCount=0;
		return (INT8U)STB_KEY_NULL;
	}	
	else								              		     /*û�а�������*/
	{
		return (INT8U)STB_KEY_NULL;
	}
}


static void pan_ct1642_Lock_LED_Scan(UINT8 u8LockFlag)
{
	osal_interrupt_disable();	
	pan_ct1642_send_bit_data(0xff,0x04); 
	osal_interrupt_enable();

	if (u8LockFlag) {
		osal_interrupt_disable();	
		pan_ct1642_send_bit_data(DATA_DOT,0x04);
		osal_interrupt_enable();
	}else {
		osal_interrupt_disable();	
		pan_ct1642_send_bit_data(DATA_DOT,0x04);
		osal_interrupt_enable();
	}

	return;
}

static INT32 pan_ct1642_ioctl(struct pan_device *dev, INT32 cmd, UINT32 param)
{
	switch (cmd)
	{
		case PAN_DRIVER_ATTACH:
			break;
		case PAN_DRIVER_SUSPEND:
			break;
		case PAN_DRIVER_RESUME:
			break;
		case PAN_DRIVER_DETACH:
			break;
		case PAN_DRIVER_READ_LNB_POWER:
			break;
		default:
			break;
	}

	return SUCCESS;
}

static void pan_ct1642_set_gpio(int gpio_pin,UINT8 val)
{
	//HAL_GPIO_BIT_DIR_SET(gpio_pin, HAL_GPIO_O_DIR);
	HAL_GPIO_BIT_SET(gpio_pin, val);
}

static void pan_ct1642_get_gpio(int gpio_pin,UINT8 *val)
{
	//HAL_GPIO_BIT_DIR_SET(gpio_pin, HAL_GPIO_I_DIR);
	*val=HAL_GPIO_BIT_GET(gpio_pin);
}

void pan_ct1642_init(void)
{
	HAL_GPIO_BIT_DIR_SET(CLK_GPIO_PIN, HAL_GPIO_O_DIR);
	HAL_GPIO_BIT_DIR_SET(DATA_GPIO_PIN, HAL_GPIO_O_DIR);
	HAL_GPIO_BIT_DIR_SET(KEY_GPIO_PIN, HAL_GPIO_I_DIR);
}

static void pan_ct1642_refresh(UINT8 *data, UINT8 len)
{
	int i;
	UINT8 tempdata[LED_BIT_COUNT];
	
	if(len>LED_BIT_COUNT)
		len=LED_BIT_COUNT;
	
	osal_interrupt_disable();	
	for(i=0;i<len;i++)
	{	
		tempdata[i]=data[i];
	}    
	
	for(i=0;i<len;i++)
	{	
		data[i]=tempdata[i];
		pan_ct1642_send_bit_data(data[i],i);
	}    
	osal_interrupt_enable();		
}

static UINT32 pan_ct1642_esc_command(struct pan_device *dev, UINT8 *data, UINT32 limit_len)
{
	pan_ct1642_info *tp = (pan_ct1642_info *)dev->priv;
	UINT32 dp;

	/* Search ESC command untill no-ESC or reached data limit */
	for (dp = 0; dp < limit_len && data[dp] == 27; dp += 4)
	{	/* LBD operate command */
		if (PAN_ESC_CMD_LBD == data[dp + 1] || 'l' == data[dp + 1])
		{
			int i;
			switch(data[dp+2])
			{
				case PAN_ESC_CMD_LBD_POWER	:
					
					break;
					
				case PAN_ESC_CMD_LBD_LOCK		:
					
					if (data[dp+3] == PAN_ESC_CMD_LBD_ON)
					{
						locked_flag =1;
					}
					else if (data[dp+3] == PAN_ESC_CMD_LBD_OFF)
					{
						locked_flag =0;
					}
					break;
					
   				case PAN_ESC_CMD_LBD_FUNCA	://standby
					if (data[dp+3] == PAN_ESC_CMD_LBD_ON)
					{
						standby_flag =1;
						
					}
					else if (data[dp+3] == PAN_ESC_CMD_LBD_OFF)
					{
						standby_flag =0;
					}	
					break;
				case PAN_ESC_CMD_LBD_MAIL:
					if (data[dp+3] == PAN_ESC_CMD_LBD_ON)
					{
						mail_flag =1;
					}
					else if (data[dp+3] == PAN_ESC_CMD_LBD_OFF)
					{
						mail_flag =0;
					}
					break;
				case PAN_ESC_CMD_LBD_WIFI:
					if (data[dp+3] == PAN_ESC_CMD_LBD_ON)
					{
						WIFI_flag=1;
					}
					else if (data[dp+3] == PAN_ESC_CMD_LBD_OFF)
					{
						WIFI_flag =0;
					}
					break;					
				case PAN_ESC_CMD_LBD_FUNCB	:
					break;
					
				case PAN_ESC_CMD_LBD_LEVEL		:
					break;
					
				default :
					break;
			}
	
		// pan_ct1642_refresh(tp->dis_buff,dev->led_num);   
		} 
		else if (PAN_ESC_CMD_LED == data[dp + 1] || 'e' == data[dp + 1])
		{
			tp->dis_buff[data[dp + 2]] = data[dp + 3];
		}
	}

	return dp;
}

static UINT32 pan_ct1642_char_map(struct pan_device *dev, UINT8 *data, UINT32 len)
{
	pan_ct1642_info *tp = (pan_ct1642_info *)dev->priv;
	UINT8 pdata, pbuff;
	UINT32 j;
	UINT8  colon_value = 0;    	
	UINT8 dot_flag = 0;
	pdata = 0;
	pbuff = 0;
	
	tp->dis_buff[tp->hw_info->pos_colon] = tp->blankmap;/* Clear colon flag */
	
	/* Search all string sector in data untill ESC or pbuf full */
	while (pdata < len && data[pdata] != 27 && pbuff < dev->led_num)
	{
		if (data[pdata] == ':')		/* Process colon charactor */
		{
			dot_flag = 1;
			pdata++;
			continue;
		}
		if (data[pdata] == '.')		/* Process dot charactor */
		{
			tp->dis_buff[pbuff] = tp->dotmap;
			pdata++;
			pbuff++;
			continue;
		}
		/* Generate the bitmap */
		tp->dis_buff[pbuff] = tp->blankmap;	/* Pre-set buffer to NULL */
		for (j = 0; j < tp->bitmap_len; j++)
		{
			if(data[pdata] == tp->bitmap_list[j].character)
			{
				tp->dis_buff[pbuff] = tp->bitmap_list[j].bitmap;
				if ((data[pdata + 1] == '.' )&& (pdata + 1) < len)
				{
					UINT32 k, l = 0;
					for(k=0; k<8; k++)
						if(tp->dotmap&(1<<k))
							l++;
					if(l==7)
						tp->dis_buff[pbuff] &= tp->dotmap;
					else
						tp->dis_buff[pbuff] |= tp->dotmap;
				}
				break;
			}
		}
		/* Move to next position */
		pbuff++;
		if (data[pdata + 1] == '.' && (pdata + 1) < len)
		{
			pdata += 2;
		} else
		{
			pdata += 1;
		}
	}

	if (dot_flag == 1)
	{
		tp->dis_buff[tp->hw_info->pos_colon-1] |= tp->colonmap;
		tp->dis_buff[tp->hw_info->pos_colon] |= tp->colonmap;
	}

	/* Display buffer full, stop display process */   
	if (data[pdata] != 27 && pbuff == dev->led_num)
	{
		 pan_ct1642_refresh(tp->dis_buff,dev->led_num);           //display char map      
		return len;
	}
	return pdata;
}

static void pan_ct1642_manage(UINT32 param)
{
	static  INT8U  v_led_position = 0;      /*��������Ʊ���*/
	static	INT8U	key_scan_cnt=0;
	INT8U v_KeyValue=STB_KEY_NULL;
//	static UINT8 tmpcnt = 0;

//	if (tmpcnt++<3)
//		return;
		
//	tmpcnt = 0;	

	if(LED_BIT_COUNT==v_led_position)    /*����ɨ��*/
	{
		v_KeyValue = pan_ct1642_key_scan(param);
		v_led_position=0;
	}
	else                                                    /*LEDɨ��*/
	{
		pan_ct1642_led_scan(param,v_led_position);
		v_led_position ++;
	}
	return;
}

static INT32  pan_ct1642_open(struct pan_device *dev)
{
    pan_ct1642_info *tp = (pan_ct1642_info*)dev->priv;
    
#if (SYS_IRP_MOUDLE != SYS_DEFINE_NULL)
	if (tp->hw_info->type_irp!=0)
		irc_m6303irc_init(tp->hw_info);
#endif
	pan_ct1642_init();
	/* Register an 1mS cycle interrupt ISR */
	osal_interrupt_register_lsr(7, pan_ct1642_manage, (UINT32)dev);
	return SUCCESS;
}


static INT32  pan_ct1642_close(struct pan_device *dev)
{
	/* Un-register an 1mS cycle interrupt ISR */
	osal_interrupt_unregister_lsr(7, pan_ct1642_manage);//���CLOSEPANʱ��������

	return SUCCESS;
}

static void pan_ct1642_display(struct pan_device *dev, char *data, UINT32 len)
{
	UINT32 pdata = 0;
	while (pdata < len)
	{
		if (data[pdata] == 27)			/* ESC command */
		{
			pdata += pan_ct1642_esc_command(dev, &(data[pdata]), len - pdata);
		} else							/* String display */
		{
			pdata += pan_ct1642_char_map(dev, &(data[pdata]), len - pdata);
		}
	}
}

INT32 pan_ct1642_attach(struct pan_configuration *config)
{
	struct pan_device *dev;
	pan_ct1642_info *tp;
	UINT8 i=0,j=0;
	
	if (config == NULL || config->hw_info == NULL)
	{
		return ERR_FAILUE;
	}
	
	dev = dev_alloc(pan_ct1642_name, HLD_DEV_TYPE_PAN, sizeof(struct pan_device));

	if (dev == NULL)
	{
		PRINTF("Error: Alloc front panel device error!\n");
		return ERR_NO_MEM;
	}
	
	/* Alloc structure space of private */
	MEMSET(&pan_ct1642_data, 0, sizeof(pan_ct1642_info));

	pan_ct1642_data.bitmap_len = PAN_CT1642_CHAR_LIST_NUM;
	pan_ct1642_data.bitmap_list = &(bitmap_table_ct1642[0]);
	pan_ct1642_data.hw_info= config->hw_info;

	dev->priv = &pan_ct1642_data;

	dev->led_num = pan_ct1642_data.hw_info->num_com;
	dev->key_num = 0;
	
	tp = (pan_ct1642_info *)dev->priv;
	
	/* Set default bitmap in buffer. At same time get the dot bitmap. */
	for (i = 0; i < tp->bitmap_len; i++)
	{
		if (' ' == tp->bitmap_list[i].character)
		{
			tp->blankmap = tp->bitmap_list[i].bitmap;
			for (j = 0; j < tp->hw_info->num_com; j++)
				tp->dis_buff[j] = tp->blankmap;
		}
		else if ('.' == tp->bitmap_list[i].character)
		{
			tp->dotmap = tp->bitmap_list[i].bitmap;
		} 
		else if (':' == tp->bitmap_list[i].character)
		{
			tp->colonmap = tp->bitmap_list[i].bitmap;
		}
	}
	
	/* Function point init */
	dev->init = pan_ct1642_attach;
	dev->open = pan_ct1642_open;
	dev->stop = pan_ct1642_close;
	dev->do_ioctl = pan_ct1642_ioctl;
	dev->display =pan_ct1642_display;
	
	CT1642_PRINT("key: %d clock: %d data: %d\n",KEY_GPIO_PIN, CLK_GPIO_PIN, DATA_GPIO_PIN);

	/* Add this device to queue */
	if (dev_register(dev) != SUCCESS)
	{
		PRINTF("Error: Register panel device error!\n");
		dev_free(dev);
		return ERR_NO_DEV;
	}
	
    	/* If is shadow scan, all key scan per 1mS interrupt, else... */
	if (tp->hw_info->type_scan == 1)
	{
		tp->cnt_repeat_first = tp->hw_info->intv_repeat_first;
		tp->cnt_repeat = tp->hw_info->intv_repeat;
	} else
	{
		tp->cnt_repeat_first = tp->hw_info->intv_repeat_first / tp->hw_info->num_com;
		tp->cnt_repeat = tp->hw_info->intv_repeat / tp->hw_info->num_com;
	}

	CT1642_PRINT("CT1642 attach ok\n");
	return SUCCESS;
}
