/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the Tuner Porting APIs needed by iPanel MiddleWare. 
    
    Note: the "int" in the file is 32bits
   
*********************************************************************/

#ifndef _IPANEL_MIDDLEWARE_PORTING_TUNER_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_TUNER_API_FUNCTOTYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    TUNER_UNUSED,
    TUNER_IDLE,
    TUNER_NEW_INPUT,
    TUNERRING,
    TUNER_FAIL,
    TUNER_SUCCESS,
    TUNER_LOST_SIGN,
    TUNER_RECOVER_SIGN,
    TUNER_UNDEFINE
} TunerStatus;

typedef struct
{
    unsigned int freq;
    unsigned int symrate;
    unsigned int modl;
    TunerStatus  status;
    OSAL_ID sem;
} struTunerParam;

int ipanel_porting_get_delSignalQuality(void);
int ipanel_porting_get_delSignalStrength(void);
int ipanel_porting_delivery_tune(int frequency, int symbol_rate, int modulation);

int ipanel_tuner_init(UINT16 ts_id, UINT16 service_id);
int ipanel_tuner_exit(void);
int get_tuner_event(unsigned int event[3]);

typedef struct tagDVBServicePlay DVBServicePlay;

int ipanel_porting_service_open(DVBServicePlay *serviceplay);
unsigned short ipanel_porting_get_startup_serviceid(void);
int ipanel_porting_select_service(int network_id, int ts_id, int service_id);


/*********************************************************************************************/
/*�ǳ���Ҫ!!! ʹ����ע�����ѻ�������7��definitions��"../include/dvb_api.h"�еĶ����Ƿ���ͬ.*/
/*********************************************************************************************/

/* �����dvb_api.h��ͬ��definitions��ֵ��ͬ */
#define MAX_DVB_TEXT_LEN	32
#define MAX_NUM_PID			8
#define MAX_NUM_DSMCC		8
#define MAX_NUM_APP			8
#define MAX_NUM_SERVICE     16

/* �����dvb_api.h��struct DSMCCStream��������ͬ */
typedef struct {
	unsigned short PID;
	unsigned short type;
	unsigned short tag; // component_tag
	unsigned int carouselId;
	/* maybe extended */
} DSMCCStreamInfo;

/* �����dvb_api.h��struct APP��������ͬ */
typedef struct {
	unsigned short type; // section_id of AIT
	unsigned int org_id;
	unsigned short app_id;
	unsigned short ON_id, TS_id, service_id; // ��service����ͬ, ���Բ�����ʡ�ռ�
	unsigned char component_tag;
	/* maybe extended */
	char name[MAX_DVB_TEXT_LEN];
	char path[MAX_DVB_TEXT_LEN];
	char version[MAX_DVB_TEXT_LEN];
} APPInfo;

/***************************************************************/

struct tagDVBServicePlay
{
	unsigned int frequency;
	unsigned int qam;
	unsigned int symbolrate;
	unsigned int original_network_id;
	unsigned int transport_stream_id;
	//
	unsigned int servicetype; /* according to definitions in EN 300 468 */
	unsigned int serviceid;
	//
	int num_video_pids;
	unsigned int video_pids[MAX_NUM_PID];
	int num_audio_pids;
	unsigned int audio_pids[MAX_NUM_PID];
	unsigned int pcr_pid;
	//
	unsigned int audio_mode;
	unsigned int audio_channel;
	unsigned int volume_ref;
	unsigned int volume;
	//
	unsigned int ait_pid; /* AIT PID(if exists) */
	//
	int num_apps; // ���service.applications.length>0, ��������; ����, Ϊ0
	APPInfo apps[MAX_NUM_APP]; // ÿ��application�Ĳ�������������
	//
	int num_dsmcc_streams; // ���service.dsmccPIDs.length>0, ��������; ����, Ϊ0
	DSMCCStreamInfo dsmcc_streams[MAX_NUM_DSMCC];
	//
	unsigned int flag_pf; /* service P/F EIT flag */
	unsigned int flag_schedule; /* service schedule EIT flag */
	unsigned int running_status; /* service running status */

	/* ͬ�������, PMT common loop���ж��CA_descriptor */
	unsigned int ecmPids[MAX_NUM_PID];
	unsigned int ecmCaSysIDs[MAX_NUM_PID];
	//
	unsigned int emmPids[MAX_NUM_PID];
	unsigned int audioEcmPids[MAX_NUM_PID];
	unsigned int videoEcmPids[MAX_NUM_PID];
	unsigned int audioCaSysIDs[MAX_NUM_PID];
	unsigned int videoCaSysIDs[MAX_NUM_PID];
	unsigned int emmCaSysIDs[MAX_NUM_PID];
	//
	unsigned int pmt_pid; /* PMT PID(һЩCAҪ��PMT��PID��ʼ, ECM/EMM��PID����!) */
};

/*
**  ��ע: ���audio/video PIDû��, ��num_apps>1, ��ôopen "service"�Ķ���������
**  ֱ��open��һ��application���ߴ�һ��application�б�ѡ��... 
*/

#ifdef __cplusplus
}
#endif

#endif
