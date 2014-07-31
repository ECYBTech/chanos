#ifndef _WS_USERINFO_H
#define _WS_USERINFO_H

#include<stdio.h>                              /*�������ͷ�ļ�*/
#include<string.h>                             /*�ַ�����ͷ�ļ�*/
#include<stdlib.h>   						   /*��̬�洢����ͷ�ļ�*/
#include <ctype.h>

/*get_user()*/
#include <pwd.h>
#include <grp.h>
#include <sys/types.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>

#define N 50                                   /*�û���������ĳ���*/   
#define BUF_LEN 128                           /*�����ַ����ĳ���*/

#define VIEWGROUP "vtyview"                    /*vtyview�û���*/
#define ADMINGROUP "vtyadmin"                  /*vtyadmin����Ա��*/

#define PATH_LENG 512 /*·���ַ������� */

#define MAX_USER_NUM 15

#define USER_LOG_IN "/var/run/cpp/web_session.xml"
#define DIFF_TIME 300         /*����ϵͳ��ʱ��������ֵ������û�������η���ϵͳ��ʱ�������ڸ�ֵ�����˳�ϵͳ���µ�½*/

///////////add by tangsiqi 2009-5-25
#define WEB_IPMASK_STRING_MAXLEN	(strlen("255.255.255.255"))
#define WEB_IPMASK_STRING_MINLEN	(strlen("0.0.0.0"))
#define WEB_MAC_STRING_MINLEN	(strlen("00:00:00:00:00:00"))


#define INPUT_OK 				0
#define INPUT_ERROR				-1

#define INPUT_NULL				INPUT_ERROR-1
#define INPUT_LENGTH_ERROR		INPUT_ERROR-2
#define INPUT_FORMAT_ERROR		INPUT_ERROR-3
#define INPUT_CHAR_ERROR		INPUT_ERROR-4
#define INPUT_IP_MASK_ERROR		INPUT_ERROR-5
#define INPUT_IP_ERROR			INPUT_ERROR-6







typedef struct  {
       int session_id;
       char user_name[N];
	   int access_time;           /*�û���¼ʱ��*/
	   int last_access_time;      /*�û�������ʱ��*/
}SESSION_PROFILE;


//char* dcryption(char *str);
char* encryption(char *user, char *pass);
char* dcryption(char *session_id);



//int get_user(char* groupname);             /*����û���Ϣ*/
int set_deluser(char* groupnme,char* current_user);          /*���Ҫɾ���û�����Ϣ*/
char *setclour(int i);                     /*�����б���ʾ��ɫ*/
int checkuser_exist(char* username);     /*����û��Ƿ����*/
int checkuser_group(char* username);    /*�ж��û�Ȩ��*/
int get_integrate_config_file(char *integrate_default, char *config_file); /*��������ļ�·��*/

int checkpassword(char *password);//����û������Ƿ��зǷ��ַ�
int checkPoint(char *ptr);	//����Ƿ���ֵ
int str2ulong(char *str,unsigned int *Value,int min_num,int max_num); //�ַ���ת��ulong����

int new_user_profile();
void add_user_infor(SESSION_PROFILE session);
void del_user_infor(char* session_id);
void modify_Last_AccTime(char* session_id,int new_access_time);
int Search_user_infor_byID(char* session_id,int ser_type,char* ser_result);
int Search_user_infor_byName(char* user_name,int ser_type,char* ser_result);
int create_user_infor(char *user_name);


//////add by tangsiqi  2009-5-25/////////////
int Input_IP_address_Check(char * ipAddress);
int Input_MAC_address_Check(char * macAddress);
int Input_User_Name_Check(char * iName);
int Input_User_Index_Check(char * iIndex);
int WEB_Pagination_get_range(int pageNumForREQ, int perPage_show_data_num, int * showHead, int *showTail);

int if_user_outtime(char *user_name);

int update_usrtime(char *session_id);

#endif

