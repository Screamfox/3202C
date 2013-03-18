/*!
	* \file 
	*/
/*********************************************************************
    Copyright (c) 2005 Embedded Internet Solutions, Inc
    All rights reserved. You are not allowed to copy or distribute
    the code without permission.
    There are the Url and Network and Cursor Porting APIs needed by iPanel MiddleWare. 
    Note: the "int" in the file is 32bits
    $ver0.0.0.1 $author Zouxianyun 2005/04/28
*********************************************************************/
#ifndef _IPANEL_MIDDLEWARE_PORTING_URL_NET_CURSOR_API_FUNCTOTYPE_H_
#define _IPANEL_MIDDLEWARE_PORTING_URL_NET_CURSOR_API_FUNCTOTYPE_H_
#ifdef __cplusplus
extern "C" {
#endif
/*get start page*/
const char *ipanel_porting_get_startpage(void);
/*set start page*/
/*!  
 *  \brief ������ҳ��Ϣ���ú���iPanel MiddleWare���ܻ�ͨ����ҳ�е�JavaScript������á�
 *  \author
 *  @param[in] ��ҳ��url���ַ�����
 *  @param[out] ��
 *  \return 0 �C �ɹ���-1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
  *  \deprecated
 */
int ipanel_porting_set_startpage(const char *url);
/*get home page*/
const char *ipanel_porting_get_homepage(void);
/*set home page*/
/*!  
 *  \brief ������ҳ��Ϣ���ú���iPanel MiddleWare���ܻ�ͨ����ҳ�е�JavaScript������á�
 *  \author
 *  @param[in] ��ҳ��url���ַ�����
 *  @param[out] ��
 *  \return 0 �C �ɹ���-1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
  *  \deprecated
 */
int ipanel_porting_set_homepage(const char *url);
/*get help page*/
/*!
 * \brief 			��ȡ����ҳ��Ϣ���ú���iPanel MiddleWare���ܻ���á�
 * \author 			
 * \param[in] 	��
 * \param[out]	��
 * \return			����ҳ��url���ַ���
 * \version			
 * \date				
 * \warning			
 * \sa					iipanel_UrlNetCursor_demo.c
 * \deprecated	
*/ 
const char *ipanel_porting_get_helppage(void);
/*set help page*/
/*!  
 *  \brief ���ð���ҳ��Ϣ���ú���iPanel MiddleWare���ܻ�ͨ����ҳ�е�JavaScript������á�
 *  \author
 *  @param[in] ����ҳ��url���ַ�����
 *  @param[out] ��
 *  \return 0 �C �ɹ���-1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
  *  \deprecated
 */
int ipanel_porting_set_helppage(const char *url);
/*connect network*/
/*!  
 *  \brief ���������豸���豸������Ŀǰ������LAN�� Dialup��PPPoE���֣���Ӧ���ַ����ǡ�lan��, ��dialup��, ��pppoe����
 *  \author
 *  @param[in] devname �����豸���ƣ�������������֮��ֱ�ӷ���-1��
 *  @param[out] ��
 *  \return 0 �C ���ӳɹ� -1 �C ʧ�ܻ��豸������
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
 *  \deprecated
 */
int ipanel_porting_network_connect(const char *devname);
/*disconnect network*/
/*!  
 *  \brief �Ͽ��������ӣ��豸������Ŀǰ������LAN�� Dialup��PPPoE���֣���Ӧ���ַ����ǡ�lan��, ��dialup��, ��pppoe����
 *  \author
 *  @param[in] �����豸���ƣ�������������֮��ֱ�ӷ���-1
 *  @param[out] ��
 *  \return 0 �C �Ͽ����ӳɹ������û������ -1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
 *  \deprecated
 */
int ipanel_porting_network_disconnect(const char *devname);
/*get network parameter*/
/*!  
 *  \brief ��ȡ���������в������ƽ���name�Ĳ���ֵ/���ԡ�Name��Ӧ�豸����ϸ��Χ˵�����£���ʽ��[���豸����:  ����������/������ֵ��] \n
 	�豸��	������	����ֵ	˵�� \n
lan	status	disconnect	û�������� \n
		connect	������ \n
	ipaddr	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	netmask	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	gateway	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver2	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	dhcp	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
	proxy	���磺http://xxx.xxx.xxx.xxx:8080	ֵС��40���ַ� \n
	proxyflag	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	unproxyurls		ֵС��250���ַ� \n
dialup	status	Disconnect, idle, dialing, no dialtone, dialing, no modem connection, line busy, PPP failed, disconnecting, 	û�������� \n
		connect, PPP Handshaking, connection dropped, delay error	�����ϻ�û�������� \n
	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	phonenumber	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
	nameserver	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver2	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	idletime	���磺xxxxxxxxxxxx   [0-9]��λs	ֵС��40���ַ� \n
	dialcount	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
	speed	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
	atcommand	���磺xxxxxxxx   [0-9 a-z A- Z]	ֵС��40���ַ� \n
	proxy	���磺http://xxx.xxx.xxx.xxx:8080	ֵС��40���ַ� \n
	proxyflag	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
pppoe	status	disconnect	û�������� \n
		connect	������ \n
	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	timeout	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
 *  \author
 *  @param[in] devname �����豸����
 *  @param[in] name ���������ַ���
 *  @param[in] buf �洢����ֵ�Ļ�����
 *  @param[in] len �洢����ֵ�ĳߴ�
 *  @param[out] ����ֵ
 *  \return �����ĳ���
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
 *  \deprecated
 */
int ipanel_porting_network_get_parameter(const char *devname, const char *name, char *buf, int len);
/*set network parameter*/
/*!  
 *  \brief ����Network �����в������ƽ���name�Ĳ���ֵ/���ԡ�Name��Ӧ�豸����ϸ��Χ˵�����£���ʽ��[���豸����:  ����������/������ֵ��] \n
�豸��	������	����ֵ	˵�� \n
lan	ipaddr	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	netmask	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	gateway	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver2	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	dhcp	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
	proxy	���磺http://xxx.xxx.xxx.xxx:8080	ֵС��40���ַ� \n
	proxyflag	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	unproxyurls		ֵС��250���ַ� \n
dialup	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	phonenumber	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
	nameserver	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	nameserver2	���磺xxx.xxx.xxx.xxx  [0-9]	ֵС��40���ַ� \n
	idletime	���磺xxxxxxxxxxxx   [0-9]��λs	ֵС��40���ַ� \n
	dialcount	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
	atcommand	���磺xxxxxxxx   [0-9 a-z A- Z]	ֵС��40���ַ� \n
	proxy	���磺http://xxx.xxx.xxx.xxx:8080	ֵС��40���ַ� \n
	proxyflag	1	ֵС��8���ַ�,��Ч \n
		0	ֵС��8���ַ�,��Ч \n
pppoe	username		ֵС��40���ַ� \n
	password		ֵС��40���ַ� \n
	timeout	���磺xxxxxxxxxxxx   [0-9]	ֵС��40���ַ� \n
 *  \author
 *  @param[in] devname �����豸����;���ֺ����Բ�������֮�У�����-1
 *  @param[in] name ���������ַ���;���ֺ����Բ�������֮�У�����-1
 *  @param[in] val �洢����ֵ/����;���ֺ����Բ�������֮�У�����-1
 *  @param[out] ��
 *  \return 0 �C �ɹ� -1 �C ʧ��
 *  \version 
 *  \date     
 *  \warning 
 *  \sa ipanel_UrlNetCursor_demo.c
 *  \deprecated
 */
int ipanel_porting_network_set_parameter(const char *devname, const char *name, const char *val);
/*get mouse or cursor position*/
void ipanel_porting_cursor_get_position(int *x, int *y);
/*set mouse or cursor position*/
void ipanel_porting_cursor_set_position(int x, int y);
/*get cursor shape*/
int ipanel_porting_cursor_get_shape(void);
/*set cursor shape*/
int ipanel_porting_cursor_set_shape(int shape);
/*int ipanel_porting_cursor_show(int showflag);*/
#ifdef __cplusplus
}
#endif
#endif
