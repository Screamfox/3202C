/*!
	* \file 
	*/
/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the OSFile Porting APIs needed by iPanel MiddleWare. 
    Note: the "int" in the file is 32bits
    $ver0.0.0.1 $author Zouxianyun 2005/04/28
*********************************************************************/
#ifndef _IPANEL_MIDDLEWARE_PORTING_OSFILE_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_OSFILE_API_FUNCTOTYPE_H_
#ifdef __cplusplus
extern "C" {
#endif
/*open a OS file*/
int ipanel_porting_localfile_open(const char *filename, const char *mode);
/*read data from a OS file*/
int ipanel_porting_localfile_read(int fd, char* buffer, int nbytes);
/*close a OS file*/
int ipanel_porting_localfile_close(int fd);
/*open a OS directory*/
/*!  
 *  \brief ��ָ��·����OSĿ¼��
 *  \author
 *  @param[in] path ָ��Ŀ¼������������������׺�ɴ�/������·��
 *  @param[out] ��
 *  \return Ŀ¼��ʾ���� -1 �C ʧ�ܡ�
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_osfile_demo.c
  *  \deprecated
 */
int ipanel_porting_localdir_open(const char *path);
/*close a OS directory*/
/*!  
 *  \brief �ر�OSĿ¼��
 *  \author
 *  @param[in] fd ��Ч��Ŀ¼��ʾ��
 *  @param[out] ��
 *  \return 0 �C �ɹ��� -1 �C ʧ�ܡ�
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_osfile_demo.c
  *  \deprecated
 */
int ipanel_porting_localdir_close(int fd);
/**directory struct define*/
#define MAX_SUB_DIRS   (20)
#define FILE_DIR_NAME_LEN  (20)
#define MAX_FILES_IN_DIR   (80)
typedef struct tagEisDir {
	char dirname[20];
	unsigned int numberofsubdirs;
	struct tagEisDir *subdir[MAX_SUB_DIRS];
	unsigned int numberoffiles;
	char filename[MAX_FILES_IN_DIR][FILE_DIR_NAME_LEN];
}EisDir;
/*read data from a OS directory*/
/*!  
 *  \brief ��ȡ��ʾ��fd�е�Ŀ¼��Ϣ�����нṹEisDir�Ķ������£�\par
typedef struct tagEisDir { \n
char dirname[20]; //��ǰĿ¼���� \n
unsigned int numberofsubdirs; //Ŀ¼��ʵ�ʵ���Ŀ¼�� \n
struct tagEisDir *subdir[20];   //�����Ŀ¼��Ϣ�����20����Ŀ¼ \n
unsigned int numberoffiles;   //Ŀ¼���ļ����� \n
char filename[80][20];       //Ŀ¼�����80���ļ���ÿ���ļ������ֲ�����20���ַ� \n
}EisDir; \n
 *  \author
 *  @param[in] fd Ŀ¼��ʾ�����洢Ŀ¼�ṹ���ڴ�ռ�
 *  @param[out] dir Ŀ¼�ṹ��Ϣ
 *  \return 0 -- �ɹ��� -1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_osfile_demo.c
  *  \deprecated
 */
int ipanel_porting_localdir_read(int fd, EisDir **dir);
/*create a new OS directory*/
/*!  
 *  \brief ��·��path�´���dir��Ŀ¼��
 *  \author
 *  @param[in] ·��path��Ŀ¼��dir
 *  @param[out] ��
 *  \return 0 �C �ɹ��� -1 �C ʧ�ܡ�
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_osfile_demo.c
  *  \deprecated
 */
int ipanel_porting_localdir_mkdir(const char *path, const char *dir);
#ifdef __cplusplus
}
#endif
#endif
