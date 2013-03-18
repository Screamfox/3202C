#include <sys_config.h>
#include <types.h>
#include <basic_types.h>
#include <mediatypes.h>
#include <api/libc/printf.h>
#include <api/libc/string.h>
#include <osal/osal.h>
//#include <api/libosd/osd_lib.h>

#include <api/libcas/gy/cas_gy.h>
#include <api/libcas/gy/gyca_def.h>

#include "win_cas_com.h"
#include "win_mail_content.h"

#if 0
/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern CONTAINER g_win_mail_content;
extern CONTAINER win_mail_content_con;

extern TEXT_FIELD mail_time_str;
extern TEXT_FIELD mail_time_info;
extern TEXT_FIELD mail_title_str;
extern MULTI_TEXT mail_title_info;
extern TEXT_FIELD mail_content_str;
extern MULTI_TEXT mail_content_info;

extern SCROLL_BAR mail_content_scb;

static VACTION mail_content_con_keymap ( POBJECT_HEAD pObj, UINT32 key );
static PRESULT mail_content_con_callback ( POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2 );

static VACTION mail_content_keymap ( POBJECT_HEAD pObj, UINT32 key );
static PRESULT mail_content_callback ( POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2 );

#define WIN_SH_IDX	  WSTL_COMMON_BACK_2
#define WIN_HL_IDX	  WSTL_COMMON_BACK_2
#define WIN_SL_IDX	  WSTL_COMMON_BACK_2
#define WIN_GRY_IDX  WSTL_COMMON_BACK_2

#define CON_SH_IDX   WSTL_BUTTON_2
#define CON_HL_IDX   WSTL_BUTTON_1
#define CON_SL_IDX   WSTL_BUTTON_2
#define CON_GRY_IDX  WSTL_BUTTON_2

#define CON_IDX	        WSTL_WIN_2
#define MTXT_SH_IDX WSTL_TXT_7//WSTL_TXT_4//WSTL_TXT_WIN_POP

#define TXTN_SH_IDX   WSTL_TXT_4
#define TXTN_HL_IDX   WSTL_TXT_5
#define TXTN_SL_IDX   WSTL_TXT_4
#define TXTN_GRY_IDX  WSTL_TXT_10

#define LIST_BAR_SH_IDX  WSTL_SCROLLBAR_1
#define LIST_BAR_HL_IDX  WSTL_SCROLLBAR_1
#define LIST_BAR_MID_RECT_IDX  	    WSTL_NOSHOW_IDX
#define LIST_BAR_MID_THUMB_IDX  	WSTL_SCROLLBAR_2

#define W_L		0
#define W_T		90
#define W_W		720
#define W_H		400

#define W_CON_L		66
#define W_CON_T	102
#define W_CON_W	604
#define W_CON_H     	364

#define SCB_L (W_CON_L + 2)
#define SCB_T (W_CON_T+120)
#define SCB_W 12
#define SCB_H (W_CON_H + W_CON_T - SCB_T -4)

#define TXTN_L		(SCB_L+2)
#define TXTN_T		(W_CON_T + 20)
#define TXTN_W		130
#define TXTN_H		30
#define TXTN_GAP	10

#define MTXT_W		460
#define MTXT_H1 ((TXTN_H+TXTN_GAP)*2)	
#define MTXT_H2 ((TXTN_H+TXTN_GAP)*5)	

#define LDEF_TXT(root,varTxt,nxtObj,ID,sh,l,t,w,h,align,resID,str)		\
    DEF_TEXTFIELD(varTxt,root,nxtObj,C_ATTR_ACTIVE,0, \
    ID,0,0,0,0, l,t,w,h, sh,sh,sh,sh,NULL,NULL,  \
    align | C_ALIGN_TOP, 10,0,resID,str)

#define LDEF_MTXT(root,varMtxt,nextObj,ID,l,t,w,h,cnt,sb,content)	\
	DEF_MULTITEXT(varMtxt,&root,nextObj,C_ATTR_ACTIVE,0, \
    	ID,ID,ID,ID,ID, l,t,w,h, MTXT_SH_IDX,MTXT_SH_IDX,MTXT_SH_IDX,MTXT_SH_IDX,   \
	mail_content_con_keymap,mail_content_con_callback,  \
    	C_ALIGN_LEFT | C_ALIGN_TOP, cnt,  4,4,w-8,h-8,sb,content)

#define LDEF_BAR(root,varScb,page,l,t,w,h)	\
	DEF_SCROLLBAR(varScb, &root, NULL, C_ATTR_ACTIVE, 0, \
		0, 0, 0, 0, 0, l, t, w, h, LIST_BAR_SH_IDX, LIST_BAR_HL_IDX, LIST_BAR_SH_IDX, LIST_BAR_SH_IDX, \
		NULL, NULL, BAR_VERT_AUTO | SBAR_STYLE_RECT_STYLE, page, LIST_BAR_MID_THUMB_IDX, LIST_BAR_MID_RECT_IDX, \
		0, 10, w, h - 20, 100, 1)

#define LDEF_WIN(varCon,nxtObj,l,t,w,h,focusID)		\
    DEF_CONTAINER(varCon,NULL,NULL,C_ATTR_ACTIVE,0, \
    0,0,0,0,0, l,t,w,h, WIN_SH_IDX,WIN_HL_IDX,WIN_SL_IDX,WIN_GRY_IDX,   \
    mail_content_keymap,mail_content_callback,  \
    nxtObj, focusID,0)

TEXT_CONTENT mail_mtxt_title[] =
{
	{ STRING_UNICODE, 0},
};

TEXT_CONTENT mail_mtxt_content[] =
{
	{ STRING_UNICODE, 0},
};

LDEF_TXT(&g_win_mail_content, mail_time_str,&mail_time_info,1,WSTL_TXT_5,\
	TXTN_L, TXTN_T, TXTN_W, TXTN_H ,C_ALIGN_CENTER,RS_EMAILINFO_SENDTIME,NULL)

LDEF_TXT(&g_win_mail_content, mail_time_info,&mail_title_str,2,WSTL_TXT_4,\
	TXTN_L+TXTN_W, TXTN_T, MTXT_W, TXTN_H ,C_ALIGN_LEFT, 0,display_strs[0])

LDEF_TXT(&g_win_mail_content, mail_title_str,&mail_title_info,3,WSTL_TXT_5,\
	TXTN_L, TXTN_T + (TXTN_H+TXTN_GAP)*1, TXTN_W, MTXT_H1, C_ALIGN_CENTER, RS_EMAILINFO_TITLE,NULL)

LDEF_MTXT(g_win_mail_content,mail_title_info, &mail_content_str, 4,\
	TXTN_L+TXTN_W, TXTN_T+(TXTN_H+TXTN_GAP)*1,MTXT_W, MTXT_H1, 1, NULL,mail_mtxt_title)

LDEF_TXT(&g_win_mail_content, mail_content_str, &mail_content_info,5,WSTL_TXT_5,\
	TXTN_L, TXTN_T+(TXTN_H+TXTN_GAP)*3, TXTN_W, MTXT_H2, C_ALIGN_CENTER, RS_EMAIL_CONTENT,NULL)

LDEF_MTXT(g_win_mail_content,mail_content_info, NULL, 6,\
	TXTN_L+TXTN_W, TXTN_T+(TXTN_H+TXTN_GAP)*3,MTXT_W, MTXT_H2, 1, &mail_content_scb, mail_mtxt_content)

LDEF_BAR(mail_content_str, mail_content_scb, 5, SCB_L, SCB_T, SCB_W, SCB_H )

DEF_CONTAINER (win_mail_content_con, NULL, &mail_time_str, C_ATTR_ACTIVE, 0, \
                0, 0, 0, 0, 0, W_CON_L, W_CON_T, W_CON_W, W_CON_H, CON_IDX, CON_IDX, CON_IDX, CON_IDX,   \
                NULL, NULL,  \
                NULL, 1, 0 )
                
LDEF_WIN(g_win_mail_content,&win_mail_content_con, W_L,W_T,W_W, W_H, 6)
#endif

TEXT_CONTENT mail_mtxt_title[] =
{
	{ STRING_UNICODE, 0},
};

TEXT_CONTENT mail_mtxt_content[] =
{
	{ STRING_UNICODE, 0},
};

/*******************************************************************************
*	Local functions & variables declare
*******************************************************************************/
extern UINT8 cur_mail_id;
extern gycamail_head email_head[GYCA_EMAIL_MAX_CNT];
static gycamail_content mail_content;
static UINT16 mail_content_disp[112+1];
static UINT16 mail_title_disp[40+1];
UINT32 ContentMailID=0;
UINT8 MAILCONTENT_FORCE_FLAG=0;

static void mail_content_set_display()
{
	UINT16 tmp[20] = {0,};
	UINT32 MJD_Date;
	UINT16 UTC_Date[3];
	UINT8 K;
	UINT8 asc_str[100];
	
#if 1
	MEMSET(mail_content_disp, 0, sizeof(mail_content_disp));
	convert_gb2312_to_unicode(mail_content.content, sizeof(mail_content.content), 
								mail_content_disp, 112);
	mail_mtxt_content[0].text.pString = mail_content_disp;

	MEMSET(mail_title_disp, 0, sizeof(mail_title_disp));
	convert_gb2312_to_unicode(email_head[cur_mail_id].title, sizeof(email_head[cur_mail_id].title),
								mail_title_disp, 40);
	mail_mtxt_title[0].text.pString = mail_title_disp;
	
	//convert_gb2312_to_unicode(/*email_head[cur_mail_id].m_szSenderName*/"���ǿƼ�Test", sizeof("���ǿƼ�Test"),
	//							tmp, sizeof("���ǿƼ�Test")); 
	//OSD_SetTextFieldContent(&mail_time_info, STRING_UNICODE, (UINT32)tmp);
	#if 1
		MEMSET(len_display_str, 0, sizeof(len_display_str));
		MJD_Date = email_head[cur_mail_id].create_Time[0]*256 + email_head[cur_mail_id].create_Time[1];
		UTC_Date[0] = ( MJD_Date-15078.2 )/365.25;//MJD�㷨���㷢�����
		UTC_Date[1] = ( MJD_Date-14956.1-(UINT32)(UTC_Date[0]*365.25) )/30.6001;//�·�
		UTC_Date[2] = MJD_Date-14956-(UINT32)(UTC_Date[0]*365.25)-(UINT32)(UTC_Date[1]*30.6001);//����
		if( (UTC_Date[1]==15) || (UTC_Date[1]==14) )
			K=1;
		else
			K=0;
		UTC_Date[0] += K;
		UTC_Date[1] = UTC_Date[1]-1-K*12;
		UTC_Date[0] += 1900;//Year since 1900
		
		sprintf(asc_str, "%02d%02d-%02d-%02d",(UINT8)(UTC_Date[0]/100),(UINT8)(UTC_Date[0]%100),UTC_Date[1],UTC_Date[2]);
		ComAscStr2Uni(asc_str, len_display_str);
		
		OSD_SetTextFieldContent(&mail_time_info, STRING_UNICODE, (UINT32)len_display_str);
	#else
		OSD_SetTextFieldContent(&mail_time_info, STRING_ANSI, "");
	#endif
	
#else //debug only
	UINT8 *p;
	static UINT16 t1[50], t2[1500], t3[30];

	sprintf(t1,"���ǿ����ʼ�����");
	convert_gb2312_to_unicode(t1, DVTCA_MAXLEN_EMAIL_SHORT_CONTENT,
								mail_title_disp, DVTCA_MAXLEN_EMAIL_SENDERNAME); 
	sprintf(t2, "��֪ͨ������Բ��ֵ��������ι���Ʊ�۸����ʱȣ��۸�ƫ�ߣ�Ϊ�ٽ�����ҵ������չ���ƶ��ġ���ĿǰCPI�ϸߵ�����£���̨�������ƾ�����Ʊ�������ڽ�ͨ�������۸񣬱�������ϣ��ȫ�����ͨ�͵ľ��ġ�2. ������Ʊ�۸�һֱ���������ص��ص�֮һ�����ҷ���ί2005�귢��֪ͨҪ���ص㾰����Ʊ������Ҫ������֤�ᣬ2007��2�·����ˡ����ڽ�һ�����õ�ǰ�����ι۵���Ʊ�۸��������֪ͨ����Ҫ��ͳһ��Ʊ�۸��ϵ��ļ�����ڲ��õ���3�꣬��Ʊ��۵ķ�������ѭһ��������3. ��֪ͨ���ĳ�̨���Ѵﵽ3��������ޣ����ڽ�ǿ���Ԥ�ڵ����й�˾�����һ��Ӱ�졣��ǰ����üɽA������ҵ�񡢹������Σ�����,����,��Ѷ�����δ�ҵ�񼰾�����Ʊҵ�񡢻�ɽ���Σ�����,����,��Ѷ������Ʊҵ��Ⱦ߱�����������������Ž�ǿ�����Ԥ�ڣ�Ԥ����տ������Ͷ���߽��ͶԸ��๫˾ҵ�������ٶȵ�Ԥ�ڡ�֪ͨ�ĳ�̨�����ڽ����Ѿ�������۵����������Σ�����,����,��Ѷ��������ҵ�񡢶�üɽA��Ʊҵ�񡢻�ɽ���ε�����ҵ��Ӱ��ƫ���档�������������ʵľ��������й�˾����Դ���в��ɸ����Ե��ص㣬��������¢�����ƣ��Ǿ߱����ڼ�ֵͶ�ʵ�Ʒ�֣������ڲ�����۲���Ӱ�칫˾����Ͷ�ʼ�ֵ��������Ȼά�ֻ�ɽ���Ρ��������Ρ���üɽA���������εġ����֡�������4. ������ʾ��������ҵ��չͬ���÷�չ���˾���֧�����롢��Ͼʱ��������أ����ܹ��Һ�۵������ߡ���Ȼ�ֺ������顢ս����Ӱ�졣�������ٷŻ��������֧��������Ͷ�������ҵ��չ���������Ӱ�졣�����ǻƽ��ܸĸ�ĵ�һ�꣬�˴θĸ������ҵ������Ӱ��Ӧ�����һ��ӡ֤�� ");
	convert_gb2312_to_unicode(t2, DVTCA_MAXLEN_EMAIL_CONTENT,
								mail_content_disp, DVTCA_MAXLEN_EMAIL_CONTENT); 
	mail_mtxt_content[0].text.pString = mail_content_disp;
	mail_mtxt_title[0].text.pString = mail_title_disp;

	sprintf(t3, "���ǵ���");
	convert_gb2312_to_unicode(t3, DVTCA_MAXLEN_EMAIL_SENDERNAME,
								tmp, DVTCA_MAXLEN_EMAIL_SENDERNAME); 
	OSD_SetTextFieldContent(&mail_time_info, STRING_UNICODE, (UINT32)tmp);
	
#endif

}

static UINT32 mail_content_got_info()
{
	UINT32 ret;
	gycamail data;
	MEMSET(&mail_content, 0, sizeof(gycamail_content));
	ret = gyca_readmail_one_from_ram(cur_mail_id, &data);
	if(GYCA_OK != ret)
	{
		cas_popup_msg(NULL, NULL, RS_CAERR_NOINFO);
		return 0;
	}
	MEMCPY(mail_content.content, data.info.m_szEmail_Content, sizeof(data.info.m_szEmail_Content));
	gyca_setmail_one_oldstatus_ram(cur_mail_id);
	gyca_check_new_mail();
	return 1;
}


static VACTION mail_content_con_keymap ( POBJECT_HEAD pObj, UINT32 key )
{
	VACTION act = VACT_PASS;

	switch ( key )
	{
		case V_KEY_UP:
			act = VACT_CURSOR_UP;
			break;
		case V_KEY_DOWN:
			act = VACT_CURSOR_DOWN;
			break;
		case V_KEY_P_UP:
			act = VACT_CURSOR_PGUP;
			break;
		case V_KEY_P_DOWN:
			act = VACT_CURSOR_PGDN;
			break;
		default:
			act = VACT_PASS;
	}

	return act;
}
static PRESULT mail_content_con_callback ( POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2 )
{
	return  PROC_PASS;
}

static VACTION mail_content_keymap ( POBJECT_HEAD pObj, UINT32 key )
{
	VACTION act = VACT_PASS;

	switch ( key )
	{
		case V_KEY_MENU:
			act = VACT_CLOSE;
			break;
		case V_KEY_EXIT:
			BackToFullScrPlay();
			//CDCASTB_RequestUpdateBuffer();
			break;
		default:
			act = VACT_PASS;
	}

	return act;
}
static PRESULT mail_content_callback ( POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2 )
{
	PRESULT ret = PROC_PASS;
	INT32 iret;
	/*struct help_item_resource mail_con_help[] =
	{
		{1,IM_HELP_ICON_TB,RS_HELP_SELECT},
		{0,RS_MENU,RS_HELP_BACK},
		{0,RS_HELP_EXIT,RS_FULL_PLAY},  
	};*/

	switch ( event )
	{
		case EVN_PRE_OPEN:
			 OSD_ClearObject((POBJECT_HEAD)&g_win_mail, C_UPDATE_ALL);
			mail_title_info.pTextTable = ( PTEXT_CONTENT ) &mail_mtxt_title;
			//mail_title_info.pString = NULL;
			mail_content_info.pTextTable = ( PTEXT_CONTENT ) &mail_mtxt_content;
			//mail_content_info.pString = NULL;
			win_init_pstring(3);

			iret = mail_content_got_info();
			if (0 == iret)
			{
				ret = PROC_LEAVE;
				break;
			}
			//wincom_open_help(mail_con_help, 3);
			break;
		case EVN_POST_OPEN:
			break;
		case EVN_PRE_DRAW:
			mail_content_set_display();
			break;
		case EVN_PRE_CLOSE:
			/* Make OSD not flickering */
			if((menu_stack_get(0)!=( POBJECT_HEAD ) &g_win_mainmenu)&&(menu_stack_get(0)!=( POBJECT_HEAD ) &g_win_mail))
			{	
				*((UINT32*)param2) &= C_CLOSE_CLRBACK_FLG;
				MAILCONTENT_FORCE_FLAG=0;
			}
			else
				*((UINT32*)param2) &= ~C_CLOSE_CLRBACK_FLG;
			break;
		case EVN_POST_CLOSE:
			break;
	}
	return ret;
}

