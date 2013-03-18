/*!
	* \file 
	*/
/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the NVRAM Porting APIs needed by iPanel MiddleWare. 
    Note: the "int" in the file is 32bits
    $ver0.0.0.1 $author Zouxianyun 2005/04/28
*********************************************************************/
#ifndef _IPANEL_MIDDLEWARE_PORTING_NVRAM_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_NVRAM_API_FUNCTOTYPE_H_
#ifdef __cplusplus
extern "C" {
#endif
/*NVRAM information -- address and size, usually is FLASH Memory*/
/*!  
 *  \brief ���Flash Memory���ϵ籣������������ʼ��ַ��������ÿ��ĳ��ȣ������iPanel MiddleWare����NVRAM��Flash Memoryÿ����ʳߴ���32k/64k/128k/256kBytes����NVRAM����С�ռ䲻��С��64k��ע�⣺������ú����ò���nvram�ĵ�ַ�ͳߴ�ʱ�� ���񲻱�ʵʩ������nvram�ӿں������Էſա�
 *  \author
 *  @param[in] addr ���滺������ʼ��ַ�ı����ĵ�ַ��
 *  @param[in] numberofsections ��������ĵ�ַ
 *  @param[in] size ���滺�������ȵı����ĵ�ַ��
 *  @param[out] Flash����ʼ��ַ��������ÿ��Ĵ�С
 *  \return 0 �C �ɹ���-1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa \#define NVRAMSIZE  0x8000 \n
Static unsigned char *flash_Base; //ʵ��NVRAM��ַ \n
int ipanel_porting_nvram_info(unsigned char ** addr, int *num, int *size) \n
{ \n
*addr = flash_Base; \n
*num  = 4; \n
*size = NVRAMSIZE; \n
If ( (*num == 0 || *addr == NULL) || \n
((*size != 0x8000) && (*size != 0x10000) && (*size != 0x20000) && (*size != 0x40000)) || \n
(*num * *size < 0x10000) ) { \n
*addr = NULL; \n
*num = 0; \n
*size = 0; \n
return -1; \n
} \n
Return 0; \n
} \n
  *  \deprecated
 */
int ipanel_porting_nvram_info(unsigned char **addr, int *numberofsection, int *sect_size);
/*Read NVRAM flash data, the function is belong to NVRAM part.*/
/*!  
 *  \brief ��Flash Memory(���籣��)�ж�ȡָ�����ֽ��������ݻ������У�ʵ��ʱע������ռ�Խ�硣
 *  \author
 *  @param[in] flash_addr ��Ҫ��ȡ��Ŀ��Flash Memory����ʼ��ַ��
 *  @param[in] buff_addr �����ȡ���ݵĻ�������
 *  @param[in] nbytes ��Ҫ��ȡ���ֽ�����
 *  @param[out] ��ȡ������
 *  \return ʵ�ʶ�ȡ���ȣ����ʧ�ܣ�����-1
 *  \version 
 *  \date     
 *  \warning 
 *  \sa Int ipanel_porting_nvram_read(unsigned int flash_addr, unsigned char *buff_addr, int nbytes) \n
{ \n
if (flash_addr < flash_Base || flash_addr > flash_Base + NVRAMSIZE �C nbytes) { \n
memset(buff_addr, 0, nbytes); \n
return -1; \n
} \n
memcpy (buff_addr, (char *)flash_addr, nbytes); \n
return nbytes; \n
} \n
  *  \deprecated
 */
int ipanel_porting_nvram_read(unsigned int address, unsigned char *buf, int nbytes);
/*Write data to NVRAM flash , the function is belong to NVRAM part.*/
/*!  
 *  \brief ������д��Flash Memory(���籣��)�ռ仺�����У�ʵ��ʱע������ռ�Խ�����⡣��ע���첽�ٶ����⣬ ����ʹ���µ��߳���ͬ���ٶȣ����Ҹú��������������أ�������������ʵ�ʴ���ʱ��ͨ���Ὠ��һ������SDRAM�����Ƚ�����д��SDRAM����ȥ���������أ�Ȼ���̨����/����/�߳̽�����SDRAM���е�����д��NVRAM�С���Ҫע�����ǣ��ú������غ��ڴ�buff_addr�������������ͷţ����ǵȵ�����״̬����ipanel_porting_nvram_status(unsigned int flash_addr, int len)����д�ɹ���Ż��ͷŸ�buff_addr��porting����Ա���Գ��������㡣
 *  \author
 *  @param[in] flash_addr ��Ҫд���Ŀ����ʼ��ַ��
 *  @param[in] buff_addr д�����ݿ����ʼ��ַ��
 *  @param[in] len ��Ҫд����ֽ�����
 *  @param[out] ��
 *  \return ʵ��д�����ݣ�ʧ�ܷ���-1
 *  \version 
 *  \date     
 *  \warning 
 *  \sa int ipanel_porting_nvram_burn(unsigned int flash_addr, const char *buff_addr, int len) \n
{ \n
if (flash_addr< flash_Base|| flash_addr>flash_Base + NVRAMSIZE�Clen) { \n
return -1; \n
} \n
post msg[buffer address] to queque \n
return len; \n
} \n
In other task/process/pthread \n
Void write_data from_mirror_to_flash(void) \n
{ \n
Get msg from queque; \n
Write status as Write data to flash \n
} \n
  *  \deprecated
 */
int ipanel_porting_nvram_burn(unsigned int address, const char *buf, int len);
/*return the status of the NVRAM block.*/
/*!  
 *  \brief �ж�������Flash Memory��д��״̬��
 *  \author
 *  @param[in] address burn����ʼ��ַ��
 *  @param[in] len     д����ֽ���
 *  @param[out] ��
 *  \return 0������д�� 1���Ѿ�д�ɹ�����1��дʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_nvram_demo.c
  *  \deprecated
 */
int ipanel_porting_nvram_status(unsigned int address, int len);
#ifdef __cplusplus
}
#endif
#endif
