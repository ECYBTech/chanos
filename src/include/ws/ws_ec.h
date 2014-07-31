#include<stdio.h>                        /*�������ͷ�ļ�*/
#include<string.h>                       /*�ַ�����ͷ�ļ�*/
#include<stdlib.h>                       /*��̬�洢����ͷ�ļ�*/

#ifndef _WS_EC_H
#define _WS_EC_H

#define LN 128                            /*��ŵ�����������ʱ���鳤��*/
#define File_Len 30                            /*�ϴ��ļ�������󳤶�*/

#define LONG_SORT 600
#define SHORT_SORT 120

#define STR_NOT_FOND	"string no found"			/*can also defined as  NULL*/

typedef struct {
    unsigned int trunkMbr[4];
}TRUNK_MEMBER_BMP;

typedef struct {
    unsigned int portMbr[2];
}PORT_MEMBER_BMP;


struct list                              /*����ṹ*/
{
//  char val[LN];                           /*��ű��������Ӧֵ*/
	struct list *next;                     /*ָ����һ�ڵ��ָ��*/
	char val[0];					/*��ű��������Ӧֵ,�������ĳ����Ǹ���ʵ�ʵĳ�����malloc�ģ�����ΪLN��������*/
};                                /*leָ��Ӣ�������ͷָ��,lcָ�����������ͷָ��*/

int equal(char *des,char *src);        /*�Ƚ��ַ���src���ַ���des��ǰsizeof(src)���ַ��Ƿ���ȣ���ȷ���1������ȷ���0*/
int load(struct list *l);               /*�ָ��ļ�fp�еı�������������l*/
char *search(struct list *l,char *v);    /*������l�в��ұ���v������ָ�������ֵ��ָ�룬û�ҵ�����NULL*/
void release(struct list *l);            /*��������l���ͷſռ�*/
char *ser_var(char *v);                /*���ļ�en-ch.txt�в��ұ���var��ֵ*/
char *getFPath(char *v);  /*���������ַ�����������Ӧ���ļ�·�����ɹ�����ָ���ļ�·���ַ�����ָ�룬ʧ�ܷ���NULL*/
char * readproductID();
int getfpath(const char *v, char *fpath );
struct list * get_chain_head(char *file_name); /*file_name��ʾ��Դ�ļ������֣����������ͷ*/



#define GET_CMD_STDOUT(buff,buff_size,cmd)\
	{\
		FILE *fp;\
		fp = popen( cmd,"r" );\
		if( NULL != fp ){\
			memset(buff,0,sizeof(buff));\
			fgets( buff, buff_size, fp );\
			pclose(fp);\
		}\
	}

char *replace_url(char *strbuf, char *sstr, char *dstr);



#endif

