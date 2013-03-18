/*******************************************************************************
** Notice: Copyright (c) 2008 Geeya corporation - All Rights Reserved 
********************************************************************************
** Description:
**                 The defination file of CAS library . the data structure prototype,enum and macro
**                 is included in the file. these are common definations thar used at CAS library and 
**                 STB application.
**
** File Rev     $Revision: \main\20060816_1.0_integration_branch\1 $
**
** Date         $Date:     Wednesday Augest 16 11:54:04 2006 $
** 
** File Name: gyca_def.h
**
********************************************************************************/
#ifndef _GYCAS_DEF_H_
#define _GYCAS_DEF_H_

#ifdef  __cplusplus
extern "C" {
#endif

#include "gyca_pub.h"

/*
** the definations about EMM,ECM 
*/
#define	CA_INFOR_CLEAR			       (0)
#define	CA_INFOR_ADD				(1)

#define 	CA_MAX_SERVICE_PER_ECM	(10)  /* 1��ECM�ɼ��ŵĽ�Ŀ��*/

/*
** CA���ݱ���������Ͷ���*/
#define   CA_STB_FILTER1		(1)	/* ECM filter */
#define	CA_STB_FILTER2		(2)	/* EMM filter */
#define	CA_STB_FILTER3		(3)	/* EMM filter */
#define	CA_STB_FILTER4		(4)	/* EMM filter */
#define	CA_STB_FILTER5		(5)	/* EMM filter */


/*
** CA OSD��ʾλ�ö���*/
#define	CA_OSD_ON_TOP				(0)	/* OSD��ʾ�ڻ����е��Ϸ�*/
#define	CA_OSD_ON_BOTTOM			(1)	/* OSD��ʾ�ڻ����е��·�*/
#define   CA_OSD_ON_MIDDLE			(2)	/* OSD��ʾ�ڻ����е��м�*/
#define   CA_OSD_ON_FULL_SCREEN	(3)	/* OSDȫ����ʾ,������ʱ���Բ�֧��*/

/*  ʱ��ṹ����*/
 typedef struct _T_CA_Time{
 	GYU8  m_byHour;	/* Сʱ*/
 	GYU8  m_byMinute;	/* ����*/
 	GYU8  m_bySecond;  /* ����*/
 }T_CA_Time;

/*  ���ڽṹ����*/
typedef struct _T_CA_Date{
	GYU16  m_byDate;      /*MJD code*/
}T_CA_Date;

/* ʱ�����ڽṹ����*/
typedef struct T_CA_DateTime{
	T_CA_Date   date;
	T_CA_Time   time;
}T_CA_DateTime;

/** CAS ϵͳ�������Ϣ*/
typedef struct _T_CAServiceInfo{
	GYU16 	m_wEcmPid;									/* ��ǰEcm��PID*/
	GYU16 	m_wOriNetworkID;							/* ԭʼ����ID*/
	GYU16 	m_wTSID;									/* ��ǰTS��ID*/
	GYU8 	m_byServiceCount;							/* ��ǰ��ͬECM PID�еĽ�Ŀ����*/
	GYU8	m_reserved;			      						/* ����*/
	GYU16	m_wServiceID[CA_MAX_SERVICE_PER_ECM];		/* ������Ŀ��PID*/
}T_CAServiceInfo;

/*
** ��Ӫ�̵���Ϣ 
*/
typedef struct _T_CA_OperatorInfo {
	GYU8   	m_bySPNameLen;	/* ��Ӫ�����Ƴ���*/
	GYU8     m_szSPName[30];	/* ��Ӫ������,0�ַ�����*/
	GYU8      m_bySPTelLen;		/* ��Ӫ����ϵ�绰�ĳ���*/
	GYU8      m_szSPTel[20];		/* ��Ӫ����ϵ�ĵ绰����,0�ַ�����*/
	GYU8      m_bySPAddrLen;	/* ��Ӫ����ϵ��ַ����*/
	GYU8      m_szSPAddr[60];	/* ��Ӫ����ϵ��ַ����,0�ַ�����*/
} T_CA_OperatorInfo;

/*
** T_CAOSDInfo OSD��ʾ������Ϣ��
** ��CAM��Ҫ��������ʾOSD���ݵ��ûص�����ʱʹ��
*/
typedef struct _T_CAOSDInfo{
	GYU8	m_byOSD_Position;   	/*OSD ��ʾ��λ��0-���� 1-�ײ�
				   				 2-�м���ʾ 3-ȫ����ʾ*/
	GYU16     m_wOSD_Show_Cycle;	/*OSD��ʾ��ʱ�䣬��λ��*/
	GYU8      m_byOSD_Text_length;	/*OSD�ı���ʾ�ĳ���*/
	GYU8      m_szOSD_Text[150];	/*OSD�ı�*/
}T_CAOSDInfo;


/*
** T_CAMailInfo�ʼ���Ϣ��
** ��CAM���յ��ʼ���֪ͨ�����н����ʼ���Ϣ����ʱ����
*/
typedef struct _T_CAMailInfo{
	GYU8       m_byEmail_Level;			/*�ʼ��ȼ� 0-��ͨ 1-����*/
	GYU8       m_byEmail_Create_Time[5]; 	/*����ʱ�� ��ʽ��MJD+HHMMSS*/
	GYU8       m_byEmail_Title_length;    	/*�ʼ����ⳤ��*/
	GYU8       m_szEmail_Title[40];     		/*�ʼ���������*/
	GYU8       m_byEmail_Content_length;  	/*�ʼ����ݳ���*/
	GYU8       m_szEmail_Content[112]; 	 /*�ʼ�����*/
}T_CAMailInfo;

/*
** T_CASoftwareUpdateInfo���������Ϣ��
** CAM���յ������г�������֪ͨ�󽫴�֪ͨ������Ӧ�ó���
*/
typedef struct _T_CASoftwareUpdateInfo{
	GYU8    m_bySoft_version[4];   //����汾
	GYU8    m_byReserved1;     		//�����ֶ�1
	GYU32   m_lFrequency;        	//Ƶ��  ��λKHz
	GYU16   m_wSymbol_rate;     //������ 
	GYU8    m_byQAM;           	//�����������������Ƶ���QAM���Ʒ�ʽ
                              		//��ϸ�ο�QAMģʽ����
	GYU16   m_wProgram_no;      //����������������ݷ����Ƶ����
	GYU16   m_wPID;             //���������������PID��Ϣ
	GYU8    m_byTable_id;          //���������������Table_id��Ϣ
	GYU8    m_byReserved2[6];    //����6���ֽ�
}T_CASoftwareUpdateInfo;

/*
** Ҫ���������ʾ��ָ����Ϣ*/
typedef struct _T_CAFingerInfo{
	GYU8  m_byShowTime;		/* ��ʾʱ�䵥λ��*/
	GYU8  m_byFingerInfoLen;	/* ָ����Ϣ����*/
	GYU8  m_szFinger[16];		/* ָ����Ϣ0�ַ�����*/
}T_CAFingerInfo;

/*************************************************************************
** IPPV ��ؽṹ����
**************************************************************************/



/*
** Ǯ����Ϣ*/
typedef struct{
	GYS32 dwBalanceToken;  /* ʣ��Ľ�� ,Ϊ������ʾǷ��*/
    GYS32 dwUsedToken;	/* �ѻ��ѵĽ�� */
}T_CA_IPPVBurseInfo;

/*IPPT�����¼��Ϣ*/
typedef struct{
	GYU16 	wEventID; /*��Ʒ�İ�ID	2*/
	T_CA_DateTime time; /*Mjdhms��ʽ	5*/
	GYU8 	stbSn[8]; /*��������STB�����(��8λ)	8*/
	GYU8 	resevred;  /*1 byte*/
}T_CA_IPPTBoughtRecord; 

/* IPPV �۸���Ϣ */
typedef struct _T_CA_IPPVPrice{
	GYU8    m_byEventPriceType; 	/* 0x0-һ���Կ۷� 0x1-��λʱ�ο۷�*/
	GYU16   m_wEventPrice;			/* ��ǰ��Ŀ�ĵ�λ�۸�,����ҷֵ�λ*/
}T_CA_IPPVPrice;

/*Ҫ������д���ĵ�ǰippv����Ϣ*/
typedef struct _T_CA_IPPVInfo{
	GYU16   m_wPlatformId;
	GYU16   m_wServiceId;			/* ��ǰ��Ŀ�ķ���id */
	GYU16   m_wEventId;  			/* ��ǰ�ۿ���Ŀ���¼�id */
	GYU32	m_dwEvent_Ex_Sn;
	T_CA_IPPVPrice  price;
	T_CA_DateTime  expiredDate;
	T_CA_DateTime  validDate;	     /*���ӵ������� ����ʼʱ��*/
	GYU16          casID;			 /*���ӵ������� �����Ʒ��ID*/
}T_CA_IPPVInfo;

//�e����ĸ�������Ĵ���FLASH�еļ�¼��ʽ,����һ����¼
typedef struct _T_CA_MotherInfo{
	GYU32 m_nsecEntitleTime; /*��������Ȩʱ��,д����������Ļ�������, ʱ������Ϊ��λ���ڱȽ�*/
	GYU8 m_szSubName[20]; /*�û�����,20�ֽ�,���ӿ���������Ҫ�˶��Ƿ���������ͬһ���û�����*/
	GYU8 m_szCUFB[64]; /*��������Ȩ���Ƶ��ӿ����ڵĻ�������*/
	GYU8 m_szExipreTime[5]; 
	GYBOOL m_bSonVerified; /*�ӿ��Ƿ��ѱ���֤, Ҫ����������Ч���ڱ�����֤, �����ӿ������տ���Ŀ*/
}T_CA_MotherInfo; 

/*�ҽǹ�涨��*/
typedef struct _T_CA_CornerAdvertise{
	GYU8 	m_bDataValid; 	/*��ǰFLASH�洢���������Ƿ���Ч, 1 Ϊ��Ч, ����Ϊ��Ч*/
	GYU16 	m_wServiceID; 
	GYU8  	m_byPosition;   	/*��OSD��ʾλ����ͬ*/
	GYU8	m_szBgColor[3]; /*���ı�����ʾ��ɫ����RGB(R, G, B)��ʾ*/
	GYU8	m_szTextColor[3]; 		/*����������ʾ��ɫ����RGB(R, G, B)��ʾ*/
	GYU8 	m_byText_length; 	/*������100���ֽڣ�Ϊ0ʱ��ʾ����ʾ���*/
	GYU8 	m_szText[101]; 	/*��Ҫ���100���ֽ��Զ�һЩ*/
}T_CA_CornerAdvertise; 

typedef struct _T_CARemoteControlInfo{
		GYU8	m_byOpCode; 			//������0: ��ָ��Ƶ��������Ŀ��1: ��תƵ����ָ��Ƶ���ָ��Ƶ��
		GYU32	m_dwFrequency; 		//������ָ��Ƶ��kHz, Ĭ�ϰ�QAM64, ������6875ksps. 	
		GYU16	m_wTsID; 				//��ת��ָ��TSID, ����
		GYU16	m_wServiceID; 			//��ת��ָ��Ƶ��service_idֻ��OpCode==1ʱ��Ƶ���л���Ч��
}T_CARemoteControlInfo;


/********************************************************************************
** CAö�����Ͷ���
********************************************************************************/
#ifndef CA_ENUM_DEFINED
#define CA_ENUM_DEFINED

/********************************************************************************
** GYCAS ���ܿ����¼�����
********************************************************************************/
typedef enum
{
	GYCA_CARD_IN = 0,		/* Inserting smart card event */
	GYCA_CARD_OUT,			/* pull out smart card event */
	GYCA_CARD_BAD,			/* bad card event notify when detecting a bad smc  */
	GYCA_CARD_NOTVALID,	/* invalid card event notify when detecting a invalid smc  */
	GYCA_CARD_ERROR, 		/* error card event notify when detecting a error smc */
	GYCA_CARD_READING
}GYCA_SMCSTATUS;

/*
** CAģ����Ϣ����
*/
typedef enum
{
	GYCA_NOTICE_SHOW = 0,		/* ��ʾ��Ŀ���ܲ��ŵ���ʾ��Ϣ*/
	GYCA_NOTICE_ERASE,		/* ������ʾ��Ϣ*/
	GYCA_OSD_ERASE,			/* ����OSD��Ϣ*/
	GYCA_RESTART_CHAN,		/* ����Ӧ�ó������²��ŵ�ǰ��Ŀ*/
	GYCA_OSD_INFO,			/* ��EMM,PEMM OSD��Ϣ֪ͨ*/
	GYCA_MAIL_INFO,			/* ��EMM,PEMM Mail��Ϣ֪ͨ*/
	GYCA_EXECUTE_OP_INFO,	/* Ҫ�������ִ�о���Ļ����в���*/
	GYCA_SW_UPDATE_INFO,		/* ��EMM,PEMM ���������Ϣ֪ͨ*/
	GYCA_TRANSPARENT_INFO,	/* CA ͸���������е�˽����Ϣ*/
	GYCA_FINGER_SHOW,		/* Ҫ����ʾָ����Ϣ*/
	GYCA_FINGER_ERASE,		/* Ҫ�����ָ����Ϣ*/
	GYCA_IPPV_INFO			/* IPPV ��Ϣ*/
}GYCA_MSG_TYPE;

/*
** ���ܿ��û����Ͷ���*/
enum
{
	SMC_NORMAL_USER = 0x0,    	/* ��ͨ�û�*/
	SMC_TEST_USER = 0x1,		/* �����û�*/
	SMC_GROUP_USER = 0x2,		/* �����û�*/
	SMC_DEMO_USER = 0x3,		/* ��ʾ�û�*/
	SMC_FOREIGN_USER = 0x4	/* �����û�*/
};


/*
** QAMģʽ*/
enum
{
	GYCA_QAM16 = 0,	/* 16QAM���Ʒ�ʽ*/
	GYCA_QAM32,		/* 32QAM���Ʒ�ʽ*/
	GYCA_QAM64,		/* 64QAM���Ʒ�ʽ*/
	GYCA_QAM128,		/* 128QAM���Ʒ�ʽ*/
	GYCA_QAM256		/* 256QAM���Ʒ�ʽ*/
};


/*
** ���ܿ���Ȩ״������*/
enum
{
	USER_ENS_UNKNOWNED = -1,	/* �û�״̬δ֪��������Ϊ���������δ�忨*/
	USER_ENS_PENDING,			/* ����δ������*/
	USER_ENS_ACTIVATE,			/* ��������Ŀ�*/
	USER_ENS_ARREARAGE,		/* Ƿ�Ѵ߽�*/
	USER_ENS_DEBT_STOP,		/* �û�Ƿ�ѣ�����ͣ��*/
	USER_ENS_CALL_FOR_STOP,	/* �û���ͣ*/
	USER_ENS_CANCELED			/* ���Ѿ�ע��*/	
};

/*
** �������õķ���״ֵ̬*/
enum
{
	GYCA_ERR = -100,					/* ���󷵻أ�ԭ����*/
	GYCA_PIN_ERR,						/* PIN���������*/
	GYCA_PARENTLEVEL_ERR,				/* ����ļҳ����Ƽ��𳬳���Χ*/
	GYCA_CARD_ERR,					/* ���ܿ���״̬����*/
	GYCA_CARD_NOPAIR,					/* ���ܿ�δ����������*/
	GYCA_CARD_MISPAIR,				/* ���ܿ����������������*/
	GYCA_INPUT_PARA_ERR,				/* ���ú�������Ĳ�������*/
	GYCA_OK = 0						/* ��ȷ����*/
};

/*
** ���ܿ�ͨѶ�������*/
enum
{
	SMC_COM_NORESP = -4,				/* ���ܿ�����Ӧ*/
	SMC_COM_LEN_MISMATCH,			/* ���볤�Ȳ�ƥ��*/
	SMC_COM_INVALIDCARDNO,			/* ����Ŀ�����Ч*/
	SMC_COM_REMOVED,					/* ���ܿ�����*/
	SMC_COM_OK = 0					/* ���ܿ���������ɹ�*/
};

#endif  //end of  CA_ENUM_DEFINED

/********************************************************************************
** �ص�����ԭ�Ͷ���
********************************************************************************/
#ifndef CA_CALLBACK_FUNC_DEFINED
#define CA_CALLBACK_FUNC_DEFINED
/*
** ���ܿ���״̬�ı�֪ͨCAģ��Ļص�����ԭ��
*/
typedef void (*SC_Status_Notify_Fct_t)(GYU8,GYU8,GYU8*,GYS32);

#endif  //end of CA_CALLBACK_FUNC_DEFINED

#ifdef  __cplusplus
}
#endif

#endif		//_GYCAS_PUBS_H_



