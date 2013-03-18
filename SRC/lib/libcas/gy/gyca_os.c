/****************************************************************************
 *
 *  ALi (Shanghai) Corporation, All Rights Reserved. 2008 Copyright (C)
 *
 *  File: dvt_os.c
 *
 *  Description: This file fills the OS related API of DVT CA library.
 *
 *  History:
 *           Date            Author         Version       Comment
 *      ========    ======      ======     =========
 *  1.  2008.01.22      Grady Xu       0.1.000       Create this file
 *
 ****************************************************************************/
#include <sys_config.h>
#include <types.h>
#include <retcode.h>
#include <hld/hld_dev.h>
#include <osal/osal.h>
#include <api/libc/printf.h>
#include <api/libc/alloc.h>
#include <api/libc/string.h>

#include <api/libcas/gy/cas_gy.h>
#include <api/libcas/gy/gyca_pub.h>
#include <api/libcas/gy/gyca_osp.h>
#include "gyca_os.h"



/*** ����һ��������ĺ����ӿ�*/
/**********************************************************************************************
** �������ƣ�    GYCA_GetRandomNumber
***********************************************************************************************
**     �ṩ�ߣ�           ������
**     ʹ���ߣ�           CAģ��
**     ��ʱʹ�ã�         CAģ���ڲ���Ҫʱʹ��
**     ����������         ��ȡһ���������޶����������
**     ���������         limit   ����޶�����
**     ���������         ��
**     ����ֵ��           �����
**     ����˵����         ��
***********************************************************************************************/
GYU32 GYCA_GetRandomNumber(GYU32 limit)
{
	GYCASDRV_PRINTF("GYCA_GetRandomNumber---ENTER\n");
	return RAND(limit);
}

/*** ��ӡ���Ժ����ӿ�*/
/**********************************************************************************************
** �������ƣ�    GYCA_DBG_Print
***********************************************************************************************
**     �ṩ�ߣ�      ������
**     ʹ���ߣ�      CAģ��
**     ��ʱʹ�ã� CAģ���ڲ���Ҫʱ���Բ���ʱʹ��
**     ���������� ͨ�����ڴ�ӡ��ʽ�������ַ���
**     ��������� fmt     c���Ը�ʽ���ַ���
**     ��������� ��
**     ����ֵ��      ʵ�ʴ�ӡ���ַ�����.(�ֽ���)
**     ����˵���� ��
***********************************************************************************************/


//static volatile char test_num = 0;
GYU32 GYCA_DBG_Print (const char *fmt, ...)
{
	//test_num++;
	//osal_task_sleep(1);
#if 1
	if(gy_switch_debug_get())
	{
		va_list arg;
		va_start(arg, fmt);
		vprintf(fmt, arg);
		va_end(arg);
	}
#endif
	return;
}

/*********************************************************************************************
** 	��������:GYCA_OSPTaskCreate
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	��������
**	���������	name[]��	4���ֽڵ��������ơ�
**	 				stackSize��	������ʹ�õĶ�ջ�Ĵ�С��
**	 				entryPoint���������ڵ�ַ��
**	 				priority��	��������ȼ���
**	 				arg1��		���ݸ�����ĵ�һ��������
**	 				taskId��	�����ID��	
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��   �ɹ���
**	 				GYFAILURE?   ��������
**	����˵����
**********************************************************************************************/
GYS32 GYCA_OSPTaskCreate
(
	char name[],
	GYU32 stackSize,
	void (*entryPoint)(void),
	GYS32 priority, 
	GYU32 arg1,
	GYU32 arg2,
	GYU32 * taskId
)
{
	gycas_info_priv_t *priv;
	OSAL_T_CTSK gy_task;
	OSAL_ID task = OSAL_INVALID_ID;
	GYU8 i =0;
	
	GYCASDRV_PRINTF("GYCA_OSPTaskCreate---ENTER--%s--%x\n",name,stackSize);

	priv = gycas_get_priv();
	
	for (i = 0; i < GYCAS_MAX_TASK_NUMBER; i++) 
	{
		if (priv->TaskTable[i] == 0) 
		{
			//priv->TaskTable[i] = *taskId;
			break;
		}
	}
	if (i >= GYCAS_MAX_TASK_NUMBER) 
	{
//		GYCAS_ERR("[Cas_gy_drv.c] GYCA_OSPTaskCreate: Fail! i = %d\n", i);
		return GYFAILURE;
	}

	gy_task.task = (OSAL_T_TASK_FUNC_PTR)entryPoint;
	gy_task.itskpri = OSAL_PRI_NORMAL;
	gy_task.stksz = stackSize;
	gy_task.quantum = 10;
	gy_task.name[0] = 'S';
	gy_task.name[1] = 'K';
	gy_task.name[2] = i+'0';
	gy_task.para1 = arg1;
	gy_task.para2 = arg2;	
	
	task = osal_task_create(&gy_task);
	if (OSAL_INVALID_ID == task)
	{
		GYCASDRV_PRINTF("[Cas_gy_drv.c] GYCA_OSPTaskCreate: Fail! i = %d\n", i);
		ASSERT(0);
		return GYFAILURE;
	}
	priv->TaskTable[i] = task;
	*taskId = task;
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCA_OSPTaskTemporarySleep
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	��ͣ����һ��ָ����ʱ�䡣
**	���������	milliSecsToWait��	��ֹ�����ʱ�䡣���Ժ���Ϊ��λ����
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       	�ɹ���
**	 				FAILURE��       	��������
**	����˵����
**********************************************************************************************/
GYS32 GYCA_OSPTaskTemporarySleep(GYU32 milliSecsToWait)
{

	GYCASDRV_PRINTF("GYCA_OSPTaskTemporarySleep---ENTER milliSecsToWait[%d]\n",milliSecsToWait);
	osal_task_sleep(milliSecsToWait);
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCA_OSPSemaphoreCreate
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	�����ź�����
**	���������	name[],				4���ֽڵ��ź������ơ�
**	 				initialTokenCount	��ʼ��ʱ�ź�����������
**	 				taskWaitMode��		ȡ�ø��ź����ķ�ʽ��Ϊ��������֮һ:
**	 				GYCA_WAIT_FIFO�� ���ȵȴ����ȵõķ�ʽȡ�á�
** 					GYCA_WAIT_PRIO�� �����ȼ������ȵõķ�ʽȡ�á�
**	 				semaphoreId��		���ź�����ID
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       	�ɹ���
**	 				FAILURE��       	��������
**	����˵����ĿǰCAģ��ֻ�õ���GYCA_WAIT_FIFOģʽ������޷�ʵ��
**	 				GYCA_WAIT_PRIO�������ʱ��ʵ�֡�
**********************************************************************************************/
GYS32 GYCA_OSPSemaphoreCreate
(
	char name[4], 
	GYU32 initialTokenCount,
	GYU32 taskWaitMode,
	GYU32 *semaphoreId
)
{

	UINT32 i;
	gycas_info_priv_t *priv;

	GYCASDRV_PRINTF("GYCA_OSPSemaphoreCreate---ENTER--%d\n",initialTokenCount);
	OSAL_ID sema_id = OSAL_INVALID_ID;
	sema_id = osal_semaphore_create(initialTokenCount);
	while(sema_id == OSAL_INVALID_ID)
	{
		osal_task_sleep(10);
		GYCASDRV_PRINTF("[Cas_gy_drv.c] GYCA_OSPSemaphoreCreate: Fail\n");
		return GYFAILURE;

	}
	*semaphoreId = (GYU32)sema_id;
	GYCASDRV_PRINTF("%s: id = %d\n", __FUNCTION__, *semaphoreId);
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCAS_GYCA_OSPSemaphoreGetToken
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	��ʱʹ�ã�	��������
**	����������	ȡ���ź�����
**	���������	semaphoreId,	�ȴ��ź����ķ�ʽ��Ϊ��������֮һ:
**	 				GYCA_TASK_WAIT���ȴ��ź���ֱ����ʱ��
** 					GYCA_TASK_NOWAIT�������ź�����������������ء�
**	 				milliSecsToWait,�ȴ���ʱ�䡣���waitModeΪGYCA_TASK_NOWAIT����ò�����Ч��
**					���ΪGYCA_TASK_WAIT�������ʱ�䡣
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       �ɹ���
**	 				FAILURE��       ��������
**	����˵����ע����������ĵȴ�ģʽ�ʹ����ź����ĵȴ�ģʽ֮�������
**					�����ź�������ָͬʱ�ж�������ڵȴ�ͬһ���ź���ʱ˭����ȡ
**  					���ź�������ȡ���ź���Ϊֹ���ǲ����κεĵȴ��������Ƿ����
**					ȡ���ź������������ء�
**********************************************************************************************/
GYS32 GYCA_OSPSemaphoreGetToken (	
	GYU32 semaphoreId,
 	GYU32 waitMode,
	GYU32 milliSecsToWait
)
{
	INT32 sema_result = 0;
	
	GYCASDRV_PRINTF("GYCA_OSPSemaphoreGetToken---ENTER waitMode=%d semaphoreId[%x]\n",waitMode,semaphoreId);
	if(waitMode== GYCA_TASK_WAIT)
		sema_result = osal_semaphore_capture((OSAL_ID)(semaphoreId), OSAL_WAIT_FOREVER_TIME);
	else if(waitMode== GYCA_TASK_NOWAIT)
		sema_result = osal_semaphore_capture((OSAL_ID)(semaphoreId), 1);

	if(sema_result == OSAL_E_OK)
		return GYSUCCESS;
	else
	{
		GYCASDRV_PRINTF("GYCA_OSPSemaphoreGetToken--FAIL\n");
		return GYFAILURE;
	}
}

/*********************************************************************************************
** 	��������:GYCA_OSPSemaphoreReturnToken
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	����һ���ź���
**	���������	semaphoreId,	���ź�����ID
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       �ɹ���
**	 				FAILURE��       ��������
**	����˵����              
**********************************************************************************************/
GYS32 GYCA_OSPSemaphoreReturnToken(	GYU32 semaphoreId )
{
	INT32 sema_result = 0;

	sema_result = osal_semaphore_release((OSAL_ID)(semaphoreId));
	if(sema_result == OSAL_E_OK)
		return GYSUCCESS;
	else
	{
		GYCASDRV_PRINTF("GYCA_OSPSemaphoreReturnToken---FAIL\n");
		return GYFAILURE;
	}
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCA_OSPMalloc
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	�����ڴ档
**	���������	numberOfBytes��	������ڴ�ռ�Ĵ�С�����ֽ�Ϊ��λ����
**	���������	�ޡ�
**	�� �� ֵ��	���ΪNULL�����ʾ���䲻���ڴ�,�����ľ�Ϊ�ɹ����䡣
**	����˵����              
**********************************************************************************************/
void * GYCA_OSPMalloc(GYU32 numberOfBytes)
{
	void *ptr = NULL;
	gycas_buf_link_t *buflink = NULL;
	gycas_info_priv_t *priv;

	
	GYCASDRV_PRINTF("GYCA_OSPMalloc---ENTER\n");

	ptr = MALLOC(numberOfBytes);
#if 1	
	if (ptr== NULL) 
	{
		ASSERT(0);
	} 
	else
	{
		priv = gycas_get_priv();
		buflink = MALLOC(sizeof(gycas_buf_link_t));
		if (buflink == NULL) 
		{
			ASSERT(0);
		}
		buflink->ptr = ptr;
		osal_mutex_lock(priv->mutex,OSAL_WAIT_FOREVER_TIME);
		list_add_tail(&buflink->list, &priv->buf_list);
		osal_mutex_unlock(priv->mutex);
	}
#endif
	return ptr;
}

/*********************************************************************************************
** 	��������:GYCA_OSPFree
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	�ͷŵ�������ڴ�ռ䡣
**	���������	ptrToSegment,	Ҫ�ͷŵ��ڴ�ռ�ָ�롣
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       �ɹ��ͷţ�
**	 				FAILURE��       �ͷŲ��ɹ�����������Ϊ�����ݽ�����ָ����Ч��
**	����˵����              
**********************************************************************************************/
GYS32 GYCA_OSPFree(void *ptrToSegment)
{
	gycas_buf_link_t *buflink;
	gycas_info_priv_t *priv;
	struct list_head *ptr, *temp;
	
	GYCASDRV_PRINTF("GYCA_OSPFree---ENTER\n");

	if (ptrToSegment != NULL) 
	{
	#if 1
		priv = gycas_get_priv();
		osal_mutex_lock(priv->mutex,OSAL_WAIT_FOREVER_TIME);
		list_for_each_safe(ptr, temp, &priv->buf_list) 
		{
			buflink = list_entry(ptr, gycas_buf_link_t, list);
			if (buflink->ptr == ptrToSegment)
			{
				list_del(&buflink->list);
				FREE(buflink);
				buflink = NULL;
				break;
			}
		}
		osal_mutex_unlock(priv->mutex);
		FREE(ptrToSegment);
		ptrToSegment = NULL;
	#endif
	}
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCA_OSPQueueCreate
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	����һ����Ϣ���С�
**	���������	name[],	4���ֽڵĶ������ơ�
**	 				MaxQueueLength����Ϣ�����п��Դ�ŵ���Ϣ������������Ϣ�����и�
**                                     	�����ﵽ������ʱ����������Ϣ���з���Ϣ����ʧ�ܡ�
**	 				taskWaitMode��	ȡ����Ϣ��������Ϣ�ķ�ʽ��Ϊ��������֮һ:
**	 					GYCA_WAIT_FIFO�� ���ȵȴ����ȵõķ�ʽȡ�á�
** 						GYCA_WAIT_PRIO�� �����ȼ������ȵõķ�ʽȡ�á�
**	 				queueId����Ϣ���е�ID��
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       	�ɹ���
**	 				FAILURE��       	��������
**	����˵����              
**********************************************************************************************/
GYS32 GYCA_OSPQueueCreate
(
	char name[],
	GYU32 maxQueueLength,
	GYU32 taskWaitMode,
	GYU32 *queueId
)
{
	OSAL_T_CMBF msg_q;
	OSAL_ID msq = OSAL_INVALID_ID;
	gycas_info_priv_t *priv;
	GYU8 i = 0;

	priv = gycas_get_priv();
	
	for(i=0;i<GYCAS_MAX_MSGQ_NUMBER;i++)
	{
		if(priv->msgq_table[i] == 0)
		{
			//priv->msgq_table[i] = msg_q;
			break;
		}
	}

	msg_q.bufsz = maxQueueLength*sizeof(GYCA_QUEUE_MESSAGE);
	msg_q.maxmsz = sizeof(GYCA_QUEUE_MESSAGE);
	msg_q.name[0] = 'S';
	msg_q.name[1] = 'Q';
	msg_q.name[2] = i+'0';
	msq = osal_msgqueue_create(&msg_q);
	if (OSAL_INVALID_ID == msq)
	{
		GYCASDRV_PRINTF("GYCA_OSPQueueCreate---FAIL\n");
		ASSERT(0);
		return GYFAILURE;
	}
	priv->msgq_table[i] = msq;
	*queueId = msq;
	GYCASDRV_PRINTF("GYCA_OSPQueueCreate- SUCCESS queueId=%x\n",msq);
	return GYSUCCESS;
}

/*********************************************************************************************
** 	��������:GYCA_OSPQueueGetMessage
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	����Ϣ���л�ȡ��Ϣ��
**	���������	queueId��	��Ҫȡ�õ���Ϣ��ID��
**	 				waitMode��	�ȴ���Ϣ�ķ�ʽ��Ϊ��������֮һ:
**	 					GYCA_TASK_WAIT���ȴ���Ϣֱ����ʱ��
** 						GYCA_TASK_NOWAIT��������Ϣ��������������ء�
**	 				milliSecsToWait��	�ȴ���ʱ�䡣���waitModeΪGYCA_TASK_NOWAIT�����
**		 				������Ч�����ΪGYCA_TASK_WAIT�������ʱ�䡣
**	���������	messsage��	Ϊ��Ϣ�ĸ�ʽ������QUEUE_MESSAGE��
**	�� �� ֵ��	SUCCESS�� �ɹ���
**	 				FAILURE��   ��������
**	����˵����              
**********************************************************************************************/
GYS32 GYCA_OSPQueueGetMessage
(
	GYU32 queueId,
	GYCA_QUEUE_MESSAGE *message ,
	GYU32 waitMode,
	GYU32 milliSecsToWait
)
{
	UINT32 wait_time;
	INT32 result;
	UINT32 msg_size=0;
	
	if(waitMode == GYCA_TASK_WAIT)
	{
		if(milliSecsToWait == 0)
			wait_time = OSAL_WAIT_FOREVER_TIME;
		else
			wait_time = milliSecsToWait;
	}
	else
		wait_time = 1;
	msg_size = sizeof(GYCA_QUEUE_MESSAGE) ;
	result = osal_msgqueue_receive((void *)message, (UINT32 *)(&msg_size), (OSAL_ID)queueId, wait_time);

	if(result == OSAL_E_OK)
	{
		GYCASDRV_PRINTF("GYCA_OSPQueueGetMessage-->SUCCESS;\n");
		return GYSUCCESS;
	}
	else
	{
		GYCASDRV_PRINTF("GYCA_OSPQueueGetMessage---FAIL--queueId[%x] waitMode[%d] milliSecsToWait[%x]\n",queueId,waitMode,milliSecsToWait);
		return GYFAILURE;
	}
}

/*********************************************************************************************
** 	��������: GYCA_OSPQueueSendMessage
**********************************************************************************************
**	�� �� �ߣ� 	�����С�
**	ʹ �� �ߣ�	 CAģ�顣
**	����������	������Ϣ����Ϣ���С�
**	���������	queueId����Ϣ����ID��
**	 				message��Ҫ���͵���Ϣ�����ʽ��QUEUE_MESSAGE�ṹ��
**	���������	�ޡ�
**	�� �� ֵ��	SUCCESS��       	�ɹ���
**	 				FAILURE��       	��������
**	����˵����              
**********************************************************************************************/
GYS32  GYCA_OSPQueueSendMessage(GYU32 queueId,GYCA_QUEUE_MESSAGE * message)
{
	INT32 result;

	result = osal_msgqueue_send((OSAL_ID)queueId, message, sizeof(GYCA_QUEUE_MESSAGE), 0);
	if(result == OSAL_E_OK)
	{
		GYCASDRV_PRINTF("GYCA_OSPQueueSendMessage--SUCCESS\n");
		return GYSUCCESS;
	}
	else
	{
		GYCASDRV_PRINTF("GYCA_OSPQueueSendMessage---FAIL  queueId[%x]\n",queueId);
		return GYFAILURE;
	}
}

void GYCA_GetStbSn(GYU8 * sn, GYS16 *len)
{
	GYU8 i;
	GYCASDRV_PRINTF("%s,+++++++++++++++++++++++++++\n",__FUNCTION__);
	gycas_info_priv_t* priv = NULL;
	priv= gycas_get_priv();
	*len = 0;
	for(i = 0; i<20; i++)
	{
		if(priv->stb_id[i] != '\0')
		{
			sn[*len] = priv->stb_id[i];
			*len++;
		}
		else
			break;
	}
	//GYCASDRV_PRINTF("%s,  STB SN: %s \n",__FUNCTION__, sn);
}

/* ������ǰ�Ự�� */
/**********************************************************************************************
** �������ƣ�   GYCA_HideIppvDlg
***********************************************************************************************
**     �ṩ�ߣ�           �����С�
**     ʹ���ߣ�           CAMģ�顣
**     ��ʱʹ�ã�      CAM��Ҫ������ǰ�Ự���ʱ��
**     ����������      ������ǰ�Ự��
**     ���������      wEcmPid        ��ǰ��Ŀ��ECM PID��
**     ���������     �ޡ�                                                
**     ����ֵ��           �ޡ�                                  
**     ����˵����     ��
***********************************************************************************************/
extern GYU8 ap_cas_ipp_popup_proc(GYU8 open_close);
void GYCA_HideIppvDlg(T_CAServiceInfo *serviceInfo)
{
	ap_cas_ipp_popup_proc(0);
	return ;
}

