/*****************************************************************************

File Name  : GYAD_Api.h

Description: geeya advertisement API.

Copyright (C) 2009 Chengdu Geeya Technology Co.,Ltd

Author: Archer 

Create Date:2010.09.09

* Date				Name			    Modification
* ---------		-----------			------------
* 2010.09.09		      Archer			     Created
*  
*****************************************************************************/

#ifndef __GYAD_CORE_H__
#define __GYAD_CORE_H__

#define USHORT_LENGTH(a,b)	(((GYADU16)(a) << 8) | ((GYADU16)(b)))
#define ULONG_LENGTH(a,b,c,d)	(((GYADU32)(a) << 24) | ((GYADU32)(b))<< 16 | ((GYADU32)(c)<< 8) | ((GYADU32)(d)))

#define GYAD_GET_DATA_TIMEOUT		20

#define GYAD_PID		0xFD

#define GYAD_RELATE_TABLE_ID	0xF1
#define GYAD_DATA_TABLE_ID	0xF0



#define GYAD_AD_INDX_DES_SECTION		0 /*���λ������*/
#define GYAD_RESRC_DES_SECTION		1 /*��Դ��Ϣ������*/
#define GYAD_RESRC_INFO_SECTION		2 /*��Դ������*/

#define GYAD_PER_INDX_RESRC_MAX		10  /*ÿ�����λ����������Դ����*/

#define GYAD_NEED_SAVE_TO_NVRAM		1 /*��Դ��Ҫ���浽NVRAM*/

#define GYAD_RESRC_RELATIVE_SERVICE		1 /*��Դ�ͽ�Ŀ����*/
#define GYAD_RESRC_NOT_RELATIVE_SERVICE	0 /*��Դ�ͽ�Ŀ�޹�*/

#define GYAD_BOOT_LOGO_INDX	1 /*���������λ���*/

#define GYAD_NVRAM_HEAD_INFO_SIZE	1 /*NVRAM��Ϣͷ�ĳ���*/

#define GYAD_RESRC_PER_SEC_DATA_LEN	2032 /*ÿ������������Դ���ݵĳ���(���һ��������)*/

/*��Դ��Ϣ*/
typedef struct{
	GYADU8 wResrcId;	/*��ԴID*/
	GYADU8 cAdIndx;	/*���λ���*/
	GYADU8 cAdVer;	/*��Դ�汾*/
	GYADU8 cRelativeFlag;	/*��Ŀ������ʶ*/
	GYADU8 cSaveFlag;	/*NVRAM�����ʶ*/
	sGYAdInfo_t sAdInfo;	/*�����Ϣ*/
}GYResrcInfo_t;

/*��Ŀ������Ϣ*/
typedef struct{
	GYADU16 wSvcId;	/*�����ID*/
	GYADU16 wTsId;	/*������ID*/
	GYADU8 cResrcNum;	/*������Դ����*/
	GYADU16 *pwResrcId; /*��ԴID*/
}GYAdProg_t;

typedef struct{
	GYADU16 wSvcNum;	/*������Ŀ������*/
	GYAdProg_t *psAdProgInfo;	/*������Ϣ*/
}GYAdRelativeInfo_t;

typedef struct{
	GYADU8 wResrcId;	/*��ԴID*/
	GYADU32 dwOffset;	/*NVRAM�е����ݵ�ַƫ��*/
}GYAdDataNvramInfo_t;

#endif

