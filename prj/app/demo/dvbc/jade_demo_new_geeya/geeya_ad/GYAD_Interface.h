/*****************************************************************************

File Name  : GYAD_Interface.h

Description: geeya advertisement interface.

Copyright (C) 2009 Chengdu Geeya Technology Co.,Ltd

Author: Archer 

Create Date:2010.09.09

* Date				Name			    Modification
* ---------		-----------			------------
* 2010.09.09		      Archer			     Created
* 2010.09.16		      Archer			     Modified
*  
*****************************************************************************/

#ifndef __GYAD_INTERFACE_H__
#define __GYAD_INTERFACE_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define	NULL 	((void*)0)

typedef	signed char	GYADS8;
typedef	signed short	GYAD16;
typedef	int			GYADS32;
typedef	unsigned char	GYADU8;
typedef	unsigned short	GYADU16;
typedef	unsigned int	GYADU32;
typedef	unsigned char	GYADBOOL;       
typedef	void			GYADVOID;

/*��������ֵ*/
typedef enum
{
	GYAD_ERROR_SUCCESS 	= 0, /*�ɹ�*/
	GYAD_ERROR_PARA		= 1, /*��������*/
	GYAD_ERROR_INVALID 	= 2, /*��Чָ��*/
	GYAD_ERROR_UNLOCK 	= 3, /*���Ƶ��δ����*/
	GYAD_ERROR_FAIL 		= 4, /*��/дNVRAMʧ�ܣ��ڴ����ʧ��*/
	GYAD_ERROR_UNKNOWN 	= 5, /*δ֪����*/
}GYADErrorType_e;

/*�������*/
typedef enum
{
	GYAD_RESRC_TYPE_IFRAME 	= 0, /*I֡*/
	GYAD_RESRC_TYPE_JPG		= 1, /*JPG*/
	GYAD_RESRC_TYPE_GIF 		= 2, /*GIF*/
	GYAD_RESRC_TYPE_BMP 		= 3, /*BMP*/
	GYAD_RESRC_TYPE_TXT 		= 4, /*���ֹ��*/
}GYADResrcType_e;

typedef struct{
	GYADU8 cAdIndx;	/*���λ���*/
	GYADU16 wSvcId;	/*�����ID*/
	GYADU16 wTsId;	/*������ID*/
	GYADU32 wCurTime;	/*��ǰʱ��*/
}sGYADRelativeInfo_t;

/*�����Ϣ*/
typedef struct{
	GYADU32 dwAdDisTime;/*��ʾʱ��*/
	GYADU32 dwAdStartTime;/*��ʼʱ��*/
	GYADU32 dwAdEndTime;	/*����ʱ��*/
	GYADU32 dwTxtColor;	/*�ı���ɫ*/
	GYADU32 dwBgColor;	/*������ɫ*/
	GYADU32 dwAdLen; 	/*����*/
	GYADU16 wAdX0;	/*���������Ϣ*/
	GYADU16 wAdY0;
	GYADU16 wAdX1;
	GYADU16 wAdY1;
	GYADU8 cAdType;	/*����*/
	GYADU8* cAdData;	/*����*/
}sGYAdInfo_t;

/**************************************************************
* Function: GYSTBAD_Malloc(GY_U32 dwMemSize)
* Descripe: Called by GYAD
* Para:
	dwMemSize: ��Ҫ������ڴ�Ĵ�С
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID *GYSTBAD_Malloc(GYADU32 dwMemSize);


/**************************************************************
* Function: GYSTBAD_Free(GY_VOID* buffer)
* Descripe: Called by GYAD
* Para:
	buffer: �ڴ��ַ
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_Free(GYADVOID *buffer);


/**************************************************************
* Function: GYSTBAD_Memset(GY_VOID* pDestBuf, GY_U8 c, GY_U32 dwSize)
* Descripe: Called by GYAD
* Para:
	pDestBuf: ����ַ
	cData: ��������
	dwSize: ���ĳ���
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_Memset(GYADVOID *pDestBuf, GYADU32 c, GYADU32 dwSize);


/**************************************************************
* Function: GYSTBAD_Memcpy(GY_VOID* pDestBuf, GY_VOID* pSrcBuf, GY_U32 dwSize)
* Descripe: Called by GYAD
* Para:
	pDestBuf: 
	pSrcBuf: 
	dwSize: 
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_Memcpy(GYADVOID *pDestBuf, GYADVOID *pSrcBuf, GYADU32 dwSize);


GYADVOID GYSTBAD_Print(const GYADU8 *fmt, ...);


/**************************************************************
* Function: GYSTBAD_RequestPrivateData(GYADU8 cReqID, const GYADU8 *pcFilter, const GYADU8* pcMask, 
									GYADU8 cLen, GYADU16 wPid, GYADU8 byWaitSeconds);
* Descripe: Called by GYAD
* Para:
	cReqID: ��ȡ˽�б������ţ���GYADSTB_PrivateDataCallback�е�cReqID��ͬ
	pcFilter: ��ǰ��������ֵ��8�ֽ�
	pcFilter: ��ǰ�����������룬8�ֽ�
	wLen: ȡ����˽�����ݵĳ���
	wPid: ��������PID������GYADSTB_PrivateDataCallback�е�wPid��ͬ
	byWaitSeconds: ��ʱ�ȴ�ʱ�䣬��λΪ�룬Ϊ0��һֱ�ȴ�
* Return: Refer to GYADErrorType_e
* Note: ֻҪ�����˱��������ͱ������GYADSTB_PrivateDataGot��������һһ��Ӧ��
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_RequestPrivateData(GYADU8 cReqID, const GYADU8 *pcFilter, 
											const GYADU8 *pcMask, GYADU8 cLen, 
											GYADU16 wPid, GYADU8 byWaitSeconds);


/**************************************************************
* Function: GYSTBAD_RequestFree(GYADU8 cReqID)
* Descripe: Called by GYAD
* Para:
	cReqID: 
* Return: None
* Note: �ͷ�filter
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_RequestFree(GYADU8 cReqID);

/**************************************************************
* Function: GYADSTB_SetTS(GYADVOID)
* Descripe: Called by GYAD
* Para:
	None
* Return: Refer to GYADErrorType_e
* Note: ��������Ƶ��
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_SetTS(GYADVOID);


/**************************************************************
* Function: GYSTBAD_SemaphoreLock(GYADVOID)
* Descripe: Called by GYAD
* Para:
	None
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_SemaphoreLock(GYADVOID);


/**************************************************************
* Function: GYSTBAD_SemaphoreUnlock(GYADVOID)
* Descripe: Called by GYAD
* Para:
	None
* Return: None
* Note: 
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_SemaphoreUnlock(GYADVOID);


/**************************************************************
* Function: GYSTBAD_SaveBootAd(sGYAdInfo_t *bootADInfo, GYADU8 bootADNum, GYADU8 bootADVer)
* Descripe: Called by GYAD
* Para:
	bootADInfo: ���������Ϣ����Ҫ����
	bootADNum:   �������ĸ���
	bootADVer:   �������汾����Ҫ����
* Return: Refer to GYADErrorType_e
* Note:STB���б���
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_SaveBootAd(sGYAdInfo_t *bootADInfo, GYADU8 bootADNum, GYADU8 bootADVer);


/**************************************************************
* Function: GYSTBAD_GetBootVer(GYADU8 *ver)
* Descripe: Called by GYAD
* Para:
	version: �������İ汾
* Return: Refer to GYADErrorType_e
* Note: 
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_GetBootVer(GYADU8 *version);


/**************************************************************
* Function: GYSTBAD_GetNvram(GYADU32 *pdwAddr, GYADU32 *len)
* Descripe: Called by GYAD
* Para:
	pdwAddr: NVRAM����ʼ��ַ
	len:   NVRAM�Ĵ�С
* Return: Refer to GYADErrorType_e
* Note: �
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_GetNvram(GYADU32 *pdwAddr, GYADU32 *len);


/**************************************************************
* Function: GYSTBAD_ReadNvram(GYADU32 dwAddr, GYADU8 *data, GYADU32 len)
* Descripe: Called by GYAD
* Para:
       dwAddr: ��ʼ��ַ
	data: ��Ҫ��ȡ������
	len:   ���ݳ���
* Return: Refer to GYADErrorType_e
* Note: 
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_ReadNvram(GYADU32 dwAddr, GYADU8 *data, GYADU32 len);


/**************************************************************
* Function: GYSTBAD_WriteNvram(GYADU32 dwAddr, GYADU8 *data, GYADU32 len)
* Descripe: Called by GYAD
* Para:
       dwAddr: ��ʼ��ַ
	data: ��Ҫ���������
	len:   ���ݳ���
* Return: Refer to GYADErrorType_e
* Note: 
* Author: Archer
***************************************************************/
GYADErrorType_e GYSTBAD_WriteNvram(GYADU32 dwAddr, GYADU8 *data, GYADU32 len);


/**************************************************************
* Function: GYSTBAD_ADExit(GYADVOID)
* Descripe: Called by GYAD
* Para:
	None
* Return: None
* Note: GYAD֪ͨSTB���������
* Author: Archer
***************************************************************/
GYADVOID GYSTBAD_ADExit(GYADVOID);


/**************************************************************
* Function: GYADSTB_ADStart(GYADU16 wPid)
* Descripe: Called by STB
* Para:
	wPid: GYAD��PID
* Return: refer to GYADErrorType_e
* Note: STB֪ͨGYAD��ʼ���չ��
* Author: Archer
***************************************************************/
GYADErrorType_e GYADSTB_ADStart(GYADU16 wPid);


/**************************************************************
* Function: GYADSTB_PrivateDataGot(GYADU8 cReqID, GYADU8 bOK, GYADU16 wPid, const GYADU8 *pcReceiveData, GYADU32 dwLen)
* Descripe: Called by STB
* Para:
	cReqID: ��ȡ˽�б������ţ���GYSTBAD_RequestPrivateData�е�cReqID��ͬ
	bOK: ��ȡ�����Ƿ�ɹ�,   1:�ɹ�   0:ʧ��
	wPid: ��������PID������GYADSTB_PrivateDataCallback�е�wPid��ͬ
	pcReceiveData: ȡ����˽������
	dwLen: ȡ����˽�����ݵĳ���
* Return: Refer to GYADErrorType_e
* Note: ֻҪ������GYSTBAD_RequestPrivateData���ͱ�����ñ�������������һһ��Ӧ��
* Author: Archer
***************************************************************/
GYADErrorType_e GYADSTB_PrivateDataGot(GYADU8 cReqID, GYADU8 bOK, GYADU16 wPid, const GYADU8 *pcReceiveData, GYADU32 dwLen);


/**************************************************************
* Function: GYADSTB_GetAdInfo(sGYADRelativeInfo_t sAdRelInfo, sGYAdInfo_t *sAdInfo)
* Descripe: Called by STB
* Para:
	sAdRelInfo: ��������Ϣ
	sAdInfo: �����Ϣ
* Return: Refer to GYADErrorType_e
* Note: 
* Author: Archer
***************************************************************/
GYADErrorType_e GYADSTB_GetAdInfo(sGYADRelativeInfo_t sAdRelInfo, sGYAdInfo_t *sAdInfo);

#ifdef  __cplusplus
}
#endif

#endif

