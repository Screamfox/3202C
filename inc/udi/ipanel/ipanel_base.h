/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the base Porting APIs needed by iPanel MiddleWare. 
    
    Note: the "int" in the file is 32bits
    
    $ver0.0.0.1 $author Zouxianyun 2005/04/28
*********************************************************************/

#ifndef _IPANEL_MIDDLEWARE_PORTING_BASE_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_BASE_API_FUNCTOTYPE_H_

#ifdef __cplusplus
extern "C" {
#endif
/********��������*********/
#include <types.h>
#include <sys_config.h>
#include <basic_types.h>
#include <mediatypes.h>
#include <api/libc/alloc.h>
#include <api/libc/printf.h>
#include <api/libc/string.h>
#include <osal/osal_timer.h>
#include <osal/osal.h>
#include <hld/hld_dev.h>
/*=========================*/
#include <bus/sci/sci.h>   //����

/********ң�ز���********/
#include <hld/pan/pan.h>
#include <hld/pan/pan_dev.h>
#include <hld/pan/pan_key.h>
/*=======================*/

/********tuner����********/
#include <hld/nim/Nim_dev.h>
#include <api/libnim/lib_nim.h>
#include <hld/nim/Nim_tuner.h>
#include <bus/i2c/i2c.h>
/*========================*/

/********demux����********/
#include <hld/dmx/dmx_dev.h>
#include <hld/dmx/dmx.h>
/*=======================*/

/*********av����**********/
#include <hld/dis/vpo.h>
#include <hld/decv/vdec_driver.h>
#include <hld/decv/decv.h>
//#include <hld/snd/snd.h>
//#include <hld/snd/snd_dev.h>
#include <hld/deca/deca.h>
#include <bus/tsi/tsi.h>
/*=======================*/

/*********gfx����*********/
#include <api/libchunk/chunk.h>
#include <hal/hal_mem.h>
#include <hal/hal_gpio.h>
#include <hld/ge/ge.h>
#include <sys_parameters.h>
/*=======================*/

/********nvram����********/
#include <hld/sto/sto.h>
#include <hld/sto/sto_dev.h>
#include <api/libc/list.h>
/*=======================*/

/*********pcm����*********/
#include <hld/snd/snd.h>
#include <hld/snd/snd_dev.h>
/*=======================*/

/********socket����*******/
#include <hld/net/net.h>
#include <bus/sci/sci.h>
#include <bus/up/up.h>
#include <api/libtcpip/lwip/sockets.h>
/*=======================*/


#define dprintf   ipanel_porting_dprintf
#define debug_printf(str) ipanel_porting_dprintf str
#define time_ms   ipanel_porting_time_ms
#define ERROR -1

struct browser_entry
{
	UINT16 ts_id;
	UINT16 service_id;
	UINT32 freq;
};

enum
{
	EIS_OS_QUEUE_SEM_STATUS_NONE,
	// queue_wait/semaphore_wait is available(value>0, not locked, etc)
	EIS_OS_QUEUE_SEM_STATUS_AVAILABLE, 
	// queue_wait/semaphore_wait is unavailable(value<=0, locked, etc)
	EIS_OS_QUEUE_SEM_STATUS_UNAVAILABLE, 
	EIS_OS_QUEUE_SEM_STATUS_UNKNOWN,
};

enum
{
	EIS_QUEUE_SEM_WAIT,
	//���ʹ����NOWAITģʽ,��ʹ�÷���ֵ�ж��Ƿ������ȵ�.
	EIS_QUEUE_SEM_NOWAIT,
};

enum
{
	//�Ƽ�ʹ�õ�ģʽ
	EIS_TASK_WAIT_FIFO, 
	EIS_TASK_WAIT_PRIO
};


/*Alloc memory function. */
void *ipanel_porting_malloc(int memsize);

/*Free memory function. */
void ipanel_porting_free(void* ptr);

/*log output function. */
int ipanel_porting_dprintf(const char* fmt, ...);

/*iPanel MiddleWare runtime base time, and Unit is millisecond (1/1000 second).*/
unsigned int ipanel_porting_time_ms(void);

int ipanel_base_init(void);

unsigned int ipanel_get_run_mode(void);

#ifdef __cplusplus
}
#endif

#endif
