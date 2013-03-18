/* ================================================================= 
	Title:				STB��CA_LIB���õ����ݽṹ���궨��
	Create Date:		2003.07.28
	Author:				GZY
	Description:		���ļ�����ANSI C���﷨	
================================================================= */

/* ================================================================= 
	Version:			4.0.0
	Modify Date:		2007.09.06
	Author:				KFM
	Description:		��ԭ�ļ���������ʹ����ֲ˵���ĵ����Ӧ	
================================================================= */

#ifndef	_PUB21EX_ST_H
#define _PUB21EX_ST_H

#include	"pub_option.h"
/*-------------------------------------����ģ�鿪��---------------------------------------
#define	INCLUDE_DETITLE			1		//����Ȩȷ���빦��
#define	INCLUDE_IPPV_APP		1		//IPPV����
#define	INCLUDE_IPPT_APP		1		//IPPT����
#define	INCLUDE_ADDRESSING_APP	1		//OSD���ʼ�����
#define	INCLUDE_CHILDCARD_APP	1		//��ĸ������
#define	INCLUDE_LOCK_SERVICE	1		//ǿ���л�Ƶ������
#define	INCLUDE_PATCHING_APP	1		//���ܿ���������
*/

#ifdef  __cplusplus
extern "C" {
#endif


/*-------------------------------------������������---------------------------------------*/
#define		ULONG			unsigned  long   
#define		WORD			unsigned  short  
#define		BYTE			unsigned  char 
#ifndef     bool
	#define		bool			BYTE
#endif

#ifndef		NULL
	#define		NULL	0
#endif

#define true	1                                          
#define false	0   

//-----��������ʱ��ָ�������ָ��Ŀռ��ʹ�÷�ʽ
#define		OUT				/*- �������߳�ʼ������������*/
#define		IN				/*- �����߳�ʼ������������*/						
#define		INOUT			/*- �����߳�ʼ�����������ݣ����ú󱻵����߷�������*/	


/*----------------------------------------�궨��-----------------------------------------*/

//---------- 1. ���ܿ��������
#define		TFCA_MAXLEN_SN					16			/*���ܿ����кŵĳ���*/
#define		TFCA_MAXLEN_PRICE				2			/*����IPPV�۸����*/
#define		TFCA_MAXLEN_OPERATOR			4			/*������Ӫ�̸���*/
#define		TFCA_MAXLEN_PINCODE		   		6			/*PIN��ĳ���*/     
#define		TFCA_MAXLEN_ACLIST				18			/*���ܿ��ڱ����ÿ����Ӫ�̵��û���������*/
#define		TFCA_MAXLEN_SLOT				20			/*���洢�����Ǯ����*/
#define		TFCA_MAXLEN_TVSPRIINFO			32			/*��Ӫ��˽����Ϣ�ĳ���*/
#define		TFCA_MAXLEN_IPPVP				300			/*���ܿ��������IPPV��Ŀ�ĸ���*/
#define		TFCA_MAXLEN_ENTITLE				300			/*���ܿ����������Ȩ��Ʒ�ĸ���*/


//---------- 2. �������������
#define		TFCA_MAXLEN_PROGRAMNUM			4			/*һ������������Ľ�Ŀ��*/
#define		TFCA_MAXLEN_ECM					8			/*ͬʱ���մ����ECMPID���������*/
#if INCLUDE_DETITLE
	#define TFCA_MAXLEN_DETITLE				5			/*ÿ����Ӫ���¿ɱ���ķ���Ȩ�����*/
#endif


//---------- 3. CAS��ʾ��Ϣ
#define		MESSAGE_CANCEL_TYPE				0x00		/*ȡ����ǰ����ʾ*/
#define		MESSAGE_BADCARD_TYPE			0x01		/*�޷�ʶ�𿨣�����ʹ��*/
#define		MESSAGE_EXPICARD_TYPE			0x02		/*���ܿ��Ѿ����ڣ�������¿�*/
#define		MESSAGE_INSERTCARD_TYPE			0x03		/*���Ž�Ŀ����������ܿ�*/
#define		MESSAGE_NOOPER_TYPE				0x04		/*���в����ڽ�Ŀ��Ӫ��*/
#define		MESSAGE_BLACKOUT_TYPE			0x05		/*��������*/
#define		MESSAGE_OUTWORKTIME_TYPE		0x06		/*���ڹ���ʱ����*/
#define		MESSAGE_WATCHLEVEL_TYPE			0x07		/*��Ŀ��������趨�ۿ�����*/
#define		MESSAGE_PAIRING_TYPE			0x08		/*��ĿҪ�������Ӧ*/
#define		MESSAGE_NOENTITLE_TYPE			0x09		/*û����Ȩ*/
#define		MESSAGE_DECRYPTFAIL_TYPE		0x0A		/*��Ŀ����ʧ��*/
#define		MESSAGE_NOMONEY_TYPE			0x0B		/*���ڽ���*/
#define		MESSAGE_ERRREGION_TYPE          0x0C		/*������ȷ*/
#define		MESSAGE_NEEDFEED_TYPE           0x0D		/*�ӿ���Ҫ��ĸ����Ӧ*/
#define		MESSAGE_ERRCARD_TYPE            0x0E		/*���ܿ�У��ʧ�ܣ�����ϵ��Ӫ�̣�ͬ�����ܿ�*/
#define		MESSAGE_UPDATE_TYPE             0x0F	    /*ϵͳ�������벻Ҫ�ο����߹ػ�*/
#define		MESSAGE_LOWCARDVER_TYPE			0x10		/*���������ܿ�*/
#define		MESSAGE_VIEWLOCK_TYPE			0x11		/*����Ƶ���л�Ƶ��*/
#define		MESSAGE_MAXRESTART_TYPE			0x12		/*���ܿ�������*/
#define		MESSAGE_FREEZE_TYPE				0x13		/*���ܿ��Ѷ��ᣬ����ϵ��Ӫ��*/
#define		MESSAGE_CALLBACK_TYPE			0x14		/*�ش�ʧ��*/
#define		MESSAGE_STBLOCKED_TYPE			0x20		/*��ػ�����������*/

//---------- 4. ���ܵ��÷���ֵ����
#define		TFCAS_OK						0x00		/*- �ɹ�*/
#define		TFCAS_UNKNOWN					0x01		/*- δ֪����*/
#define		TFCAS_POINTER_INVALID			0x02		/*- ָ����Ч*/
#define		TFCAS_CARD_INVALID				0x03		/*- ���ܿ���Ч*/
#define		TFCAS_PIN_INVALID				0x04		/*- PIN����Ч*/
#define		TFCAS_DATASPACE_SMALL			0x06		/*- �����Ŀռ䲻��*/
#define		TFCAS_CARD_PAIROTHER			0x07		/*- ���ܿ��Ѿ���Ӧ��Ļ�����*/
#define		TFCAS_DATA_NOT_FIND				0x08		/*- û���ҵ���Ҫ������*/
#define		TFCAS_PROG_STATUS_INVALID		0x09		/*- Ҫ����Ľ�Ŀ״̬��Ч*/
#define		TFCAS_CARD_NO_ROOM				0x0A		/*- ���ܿ�û�пռ��Ź���Ľ�Ŀ*/
#define		TFCAS_WORKTIME_INVALID			0x0B		/*- �趨�Ĺ���ʱ����Ч*/
#define		TFCAS_IPPV_CANNTDEL				0x0C		/*- IPPV��Ŀ���ܱ�ɾ��*/
#define		TFCAS_CARD_NOPAIR				0x0D		/*- ���ܿ�û�ж�Ӧ�κεĻ�����*/
#define		TFCAS_WATCHRATING_INVALID		0x0E		/*- �趨�Ĺۿ�������Ч*/
#define		TFCAS_CARD_NOTSUPPORT		    0x0F		/*- ��ǰ���ܿ���֧�ִ˹���*/
#define		TFCAS_DATA_ERROR				0x10		/*- ���ݴ������ܿ��ܾ�*/
#define		TFCAS_FEEDTIME_NOT_ARRIVE		0x11		/*- ι��ʱ��δ�����ӿ����ܱ�ι��*/
#define		TFCAS_CARD_TYPEERROR			0x12		/*- ��ĸ��ι��ʧ�ܣ��������ܿ����ʹ���*/


//---------- 5. ECM_PID���õĲ�������
#define		TFCAS_LIST_OK					0x00
#define		TFCAS_LIST_FIRST				0x01	
#define		TFCAS_LIST_ADD					0x02


//---------- 6. �ʼ�Ӧ����ض���
//------------ 6.1. �ʼ���С����������
#define		TFCA_MAXLEN_EMAIL_TITLE			30			/*�ʼ�����ĳ���*/
#define		TFCA_MAXLEN_EMAIL				100			/*�����б��������ʼ�����*/
#define		TFCA_MAXLEN_EMAIL_CONTENT		160			/*�ʼ����ݵĳ���*/

//------------ 6.2. �ʼ�ͼ����ʾ��ʽ
#define		Email_IconHide					0x00		/*�����ʼ�֪ͨͼ��*/
#define		Email_New						0x01		/*���ʼ�֪ͨ����ʾ���ʼ�ͼ��*/
#define		Email_SpaceExhaust				0x02		/*���̿ռ�������ͼ����˸��*/


//---------- 7. OSDӦ����ض���
//------------ 7.1. OSD�ĳ�������
#define		TFCA_MAXLEN_OSD					180			/*OSD���ݵ���󳤶�*/

//------------ 7.2. OSD��ʾ����
#define		OSD_TOP							0x01		/*OSD�����ʾ����Ļ�Ϸ�*/
#define		OSD_BOTTOM						0x02		/*OSD�����ʾ����Ļ�·�*/


//---------- 8. IPPV/IPPTӦ����ض���
//------------ 8.1. IPPV/IPPT��ͬ����׶���ʾ
#define		IPPV_FREEVIEWED_SEGMENT			0x00        /*���Ԥ���׶Σ��Ƿ���*/
#define		IPPV_PAYVIEWED_SEGMENT			0x01        /*�շѽ׶Σ��Ƿ���*/
#define		IPPT_PAYVIEWED_SEGMENT			0x02		/*IPPT�շѶΣ��Ƿ���*/

//------------ 8.2. IPPV�۸�����
#define		TFCA_IPPVPRICETYPE_TPPVVIEW			0x0		/*���ش�����¼������*/
#define		TFCA_IPPVPRICETYPE_TPPVVIEWTAPING	0x1		/*���ش�����¼������*/

//------------ 8.3. IPPV��Ŀ��״̬
#define		TFCA_IPPVSTATUS_TOKEN_BOOKING		0x01	/*Ԥ��*/
#define		TFCA_IPPVSTATUS_TOKEN_VIEWED		0x03	/*�ѿ�*/

//---------- 9. Ƶ������Ӧ����ض���
#define   TFCA_MAXLEN_COMPONENT  5
#define   TFCA_MAXLEN_LOCKMESS   40


//---------- 10. ����Ȩȷ����Ӧ����ض���
#if INCLUDE_DETITLE
	#define Detitle_All_Readed				0x00		/*���з���Ȩȷ�����Ѿ�����������ͼ��*/
	#define Detitle_Received				0x01		/*�յ��µķ���Ȩ�룬��ʾ����Ȩ��ͼ��*/
	#define Detitle_Space_Small				0x02		/*����Ȩ��ռ䲻�㣬�ı�ͼ��״̬��ʾ�û�*/
	#define Detitle_Ignore					0x03		/*�յ��ظ��ķ���Ȩ�룬�ɺ��ԣ���������*/
#endif
	

//---------- 10. ��������ʾ��Ϣ
#define		TFCA_RECEIVEPATCH				1			/*�������ݽ�����*/
#define		TFCA_PATCHING					2			/*���ܿ�������*/

/*-------------------------------------end of �궨��--------------------------------------*/



/*----------------------------------------���ݽṹ----------------------------------------*/

//---------- 1. ϵͳʱ��
typedef ULONG  TFTIME;
typedef WORD   TFDATE;

//---------- 2. �ź������壨��ͬ�Ĳ���ϵͳ���ܲ�һ����
typedef ULONG  TFCA_Semaphore;

//---------- 3. ��Ӫ����Ϣ
typedef struct _TFCAOperatorInfo{
	char	m_szTVSPriInfo[TFCA_MAXLEN_TVSPRIINFO+1];   /*��Ӫ��˽����Ϣ*/
}STFCAOperatorInfo;

//---------- 4. ��Ŀ��Ϣ
typedef struct _TFCASServiceInfo{
	WORD	m_wEcmPid;								/*��Ŀ��Ӧ������Ϣ��PID*/				
	BYTE	m_byServiceNum;							/*��ǰPID�µĽ�Ŀ����*/
	WORD 	m_wServiceID[TFCA_MAXLEN_PROGRAMNUM];	/*��ǰPID�µĽ�ĿID�б�*/	
}STFCASServiceInfo;

//---------- 5. ��ͨ��Ȩ��Ϣ
//------------ 5.1. ��Ȩ��Ϣ
typedef struct _TFCAEntitle{
	ULONG 		m_dwProductID;		/*��ͨ��Ȩ�Ľ�ĿID*/
	BYTE		m_bCanTape;			/*�û��Ƿ���¼��1������¼��0��������¼��*/
	TFDATE		m_tBeginDate;		/*��Ȩ����ʼʱ��*/
	TFDATE		m_tExpireDate;		/*��Ȩ�Ĺ���ʱ��*/
}STFCAEntitle;

//------------ 5.2. ��Ȩ��Ϣ����
typedef struct _TFCAEntitles{
	WORD			m_wProductCount;					/*��ͨ��Ȩ�ĸ���*/
	STFCAEntitle	m_Entitles[TFCA_MAXLEN_ENTITLE];		/*��ͨ��Ȩ�б�*/
}STFCAEntitles;

//---------- 6. IPPV��Ϣ
#if INCLUDE_IPPV_APP 
//------------ 6.1. Ǯ����Ϣ
	typedef struct _TFCASTVSSlotInfo{
		ULONG	m_wCreditLimit;					    /*���öȣ�������*/
		ULONG	m_wBalance;						    /*�ѻ��ĵ���*/
	}STFCATVSSlotInfo;

//------------ 6.2. IPPV��Ŀ�ļ۸�
	typedef struct _TFCAIPPVPrice{
		BYTE	m_byPriceCode;						/*��Ŀ�۸�����*/
		WORD	m_wPrice;							/*��Ŀ�۸񣨵�����*/	
	}STFCAIPPVPrice; 

//------------ 6.3. IPPV��Ŀ������ʾ��Ϣ
	typedef struct _TFCAIppvBuyInfo{
		WORD			m_wTVSID;					/*��Ӫ��ID*/
		BYTE			m_bySlotID;					/*Ǯ��ID*/
		ULONG 			m_dwProductID;				/*��Ŀ��ID*/
		BYTE			m_byPriceNum;				/*��Ŀ�۸����*/
		STFCAIPPVPrice  m_Price[TFCA_MAXLEN_PRICE];	/*��Ŀ�۸�*/
		TFDATE			m_wExpiredDate;				/*��Ŀ����ʱ��*/
	}STFCAIppvBuyInfo;

//------------ 6.4. IPPV��Ŀ��Ϣ
	typedef struct _TFCAIppvfo{
		ULONG 			m_dwProductID;				/*��Ŀ��ID*/
		BYTE			m_byBookEdFlag;				/*��Ʒ״̬��BOOKING��VIEWED*/ 
		BYTE			m_bCanTape;					/*�Ƿ����¼��1������¼��0��������¼��*/
		WORD			m_wPrice;					/*��Ŀ�۸�*/
		TFDATE			m_wExpiredDate;				/*��Ŀ����ʱ��*/
		BYTE			m_bySlotID;					/*Ǯ��ID*/
	}STFCAIppvInfo;

#endif

//---------- 7. �ʼ���Ϣ
#if INCLUDE_ADDRESSING_APP
//------------ 7.1. �ʼ�ͷ
	typedef struct _TFCAEmailHead{
		ULONG		m_dwActionID;								/*Email ID*/
		BYTE		m_bNewEmail;								/*���ʼ���ǣ�0���������ʼ���1�����ʼ�*/
		char   		m_szEmailHead[TFCA_MAXLEN_EMAIL_TITLE+1];	/*�ʼ����⣬�Ϊ30*/
		WORD 		m_wImportance;								/*��Ҫ�ԣ� 0����ͨ��1����Ҫ*/
		ULONG		m_tCreateTime;								/*EMAIL������ʱ��*/
	}STFCAEmailHead;

//------------ 7.2. �ʼ�����
	typedef struct _TFCAEmailContent{
		char		m_szEmail[TFCA_MAXLEN_EMAIL_CONTENT+1];		/*Email������*/
	}STFCAEmailContent;

#endif

//---------- 8. Ƶ��������Ϣ
#if INCLUDE_LOCK_SERVICE
//------------ 8.1. ��Ŀ�����Ϣ
	typedef struct _TFComponent{		/*�������֪ͨ�����н�Ŀ���ͼ�PID����Ϣ��һ����Ŀ���ܰ���������*/
		BYTE		m_CompType;         /*�������*/   
		WORD		m_wCompPID;         /*���PID*/  
		WORD 		m_wECMPID;			/*�����Ӧ��ECM����PID���������ǲ����ŵģ���Ӧȡ0��*/
	}STFComponent;

//------------ 8.2. Ƶ��������Ϣ
	typedef struct _TFLockService{
		BYTE		m_fec_outer;							/*ǰ���������*/          
		BYTE        m_fec_inner;							/*ǰ���������*/          
		BYTE        m_Modulation;							/*���Ʒ�ʽ*/
		ULONG		m_dwFrequency;							/*Ƶ�ʣ�BCD��*/
		ULONG 		m_symbol_rate;							/*�����ʣ�BCD��*/
		WORD		m_wPcrPid;								/*PCR PID*/
		BYTE        m_ComponentNum;							/*��Ŀ�������*/
		STFComponent m_CompArr[TFCA_MAXLEN_COMPONENT];		/*��Ŀ����б�*/     
		char        m_szBeforeInfo[TFCA_MAXLEN_LOCKMESS+1]; /*����*/
		char        m_szQuitInfo[TFCA_MAXLEN_LOCKMESS+1];   /*����*/
		char        m_szEndInfo[TFCA_MAXLEN_LOCKMESS+1];    /*����*/
	}STFLockService;
	
/*-----------------------------------------------------------------------------------
a. ��ϵͳ�У�����m_dwFrequency��m_symbol_rateʹ��BCD�룬����ǰȡMHzΪ��λ��
   ����ʱ��ǰ4��4-bit BCD���ʾС����ǰ��ֵ����4��4-bit BCD���ʾС������ֵ��
   ���磺
		��Ƶ��Ϊ642000KHz����642.0000MHz�����Ӧ��m_dwFrequency��ֵӦΪ0x06420000��
		��������Ϊ6875KHz����6.8750MHz�����Ӧ��m_symbol_rate��ֵӦΪ0x00068750��

b. ��ϵͳ�У�m_Modulation��ȡֵ���£�
	0		Reserved
	1		QAM16
	2		QAM32
	3		QAM64
	4		QAM128
	5		QAM256
	6��255	Reserved
------------------------------------------------------------------------------------*/ 

#endif

/*------------------------------------end of ���ݽṹ-------------------------------------*/


#ifdef  __cplusplus
}
#endif

#endif		

