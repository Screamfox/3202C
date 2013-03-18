/*!
	* \file 
*/
/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the Audio Porting APIs needed by iPanel MiddleWare. 
    Note: the "int" in the file is 32bits
    $ver0.0.0.1 $author Zouxianyun 2005/04/28
*********************************************************************/
#ifndef _IPANEL_MIDDLEWARE_PORTING_AUDIO_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_AUDIO_API_FUNCTOTYPE_H_
#ifdef __cplusplus
extern "C" {
#endif
/*set audio volume*/
int ipanel_porting_set_volume(int vol);
/*get audio volume*/
int ipanel_porting_get_volume(void);
/*set audio decode mode*/
int ipanel_porting_set_audio_mode(int audiomode);
/*get audio decode mode*/
int ipanel_porting_get_audio_mode(void);
/*set audio language*/
int ipanel_porting_audio_set_language(int track);
/*play audio demo*/
/*!
 * \brief 			����ָ��������Demo����ͬ�ֻ��Ĳ�ͬ������ Ŀǰֻ������ֵ��Ч��1~3���� ����ֱֵ�ӷ���-1��������չ��
 * \author 			
 * \param[in] 	type ֵ1 �� 2�� 3�� count ��ʾ���Ŵ���
 * \param[out]	��
 * \return			0 �C �ɹ���-1 �C ʧ��
 * \version			
 * \date				
 * \warning			
 * \sa					ipanel_audio_demo.c
 * \deprecated	
*/ 
/*int ipanel_porting_audio_play_the_sound(int type, int count);*/
#ifdef __cplusplus
}
#endif
#endif
