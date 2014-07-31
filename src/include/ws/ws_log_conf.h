#ifndef _WS_LOG_CONF_H
#define _WS_LOG_CONF_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*�洢��Ϣ��ʱ�ļ�*/
#define temppath "/var/run/apache2/log.txt"
#define VTYSH_CLI_LOG_CONFIG_FILE "/var/run/cli_log.conf"

/*file paths*/
#define	XML_FPATH	    "/opt/services/option/syslog_option"
#define CONF_FPATH		"/opt/services/conf/syslog_conf.conf"
#define STATUS_FPATH    "/opt/services/status/syslog_status.status"
#define XML_SYS_D       "/opt/www/htdocs/syslog.xml"
#define CONF_SYS_D      "/etc/syslog-ng/syslog-ng.conf"

/*ntp file paths*/
#define	NTP_XML_FPATH	    "/opt/services/option/ntp_option"
#define NTP_CONF_FPATH		"/etc/ntp.conf"
#define NTP_STATUS_FPATH    "/opt/services/status/ntp_status.status"
#define NTP_CONF_BK         "/opt/services/conf/ntp_conf.conf"


#define IP_TXT          "/mnt/ip.txt"

/*service operations*/
#define S_PATH		"sudo  /opt/services/init/syslog_init"
#define S_START		"start"
#define S_RESTART	"restart"
#define S_STOP		"stop"

/*ntp service operations*/
#define N_PATH		"sudo /opt/services/init/ntp_init"
#define N_START		"start"
#define N_RESTART	"restart"
#define N_STOP		"stop"


/*�ڵ㶨��*/
#define XML_NODE_ROOT		"root"

#define NODE_OPT            "options"
#define NODE_SOURCE         "source"
#define NODE_MARKZ          "markz"
#define NODE_SYSIP			"sysipz"
#define NODE_SYSPORT        "sysport"

#define NODE_ATT            "attribute"
#define NODE_CONTENT        "content"
#define NODE_VALUE          "value"
#define NODE_VIEWS          "views"
#define NODE_INFOS          "infos"
#define NODE_DIP            "df_sysip"
#define NODE_ENABLES        "enablez"
#define NODE_INDEXZ         "indexz"
#define NODE_FDEFAULT       "fdefault"
#define NODE_LSTATUS        "lstatus"

#define NODE_LOG            "log"
#define NODE_DES            "des"
#define NODE_FILTER         "filter"

#define CH_KEYZ             "keyz"
#define CH_SOURCE           "source"
#define CH_FILTER           "filter"
#define CH_DEST             "dest"

/*NTP�ڵ㶨��*/
#define NTP_SERV    "server"
#define NTP_DRIFT   "drift"
#define NTP_REST    "rest"
#define NTP_BROD    "broad"
#define NTP_RSER    "reser"

#define NTP_DEF     "default"

#define NTP_NM      "nomodify"
#define NTP_DI      "default ignore"
#define NTP_RING    "127.0.0.1"
#define NTP_PRE     "prefer"

#define log_auth    "auth.log"
#define log_cron    "cron.log"
#define log_daemon  "daemon.log"
#define log_kern    "kern.log"
#define log_debug   "debug"
#define log_message "messages"
#define log_auth_d     "df_auth"
#define log_cron_d     "df_cron"
#define log_daemon_d   "df_daemon"
#define log_kern_d     "df_kern"
#define log_debug_d    "df_debug"
#define log_message_d  "df_messages"

/*��valueֵҲ��һ����*/
#define L_WARN     "warn"
#define L_CRIT     "crit"
#define L_NOTICE   "notice"
#define L_ERR      "err"
#define L_INFO     "info"
#define L_ALL      "all"
#define L_IP       "ip"
#define L_DEBUG    "debug"

/*�ַ�������*/
#define S_SOUR  "source"
#define S_FILT  "filter"
#define S_DEST  "destination"

typedef struct {   

	char rname[128];	
	char content[256];
	
}ST_DES_INFO;

typedef struct {   
    char views[10];
	char infos[128];
	char fname[128];	
	char content[256];
	
}ST_FILTER_INFO;

typedef struct {   
    char keyz[128];
	char source[128];	
	char filter[128];
	char dest[128];
	
}ST_LOG_INFO;

typedef struct {   
	
	char *content;
	
}ST_OPT_INFO;

typedef struct {   

	char suname[128];
	char content[256];
	
}ST_SU_INFO;


typedef struct {
	
    int des_num;	
	ST_DES_INFO desinfo[10];	

	int f_num;
	ST_FILTER_INFO finfo[10];

	int log_num;
	ST_LOG_INFO loginfo[10];

	int opt_num;
	ST_OPT_INFO optinfo[10];

	int su_num;
	ST_SU_INFO suinfo[10];
	
	
}ST_SYS_ALL;

struct ntp_server_st{
char sip[30];
char sper[20];
char stime[30];
int snum;
struct ntp_server_st *next;
};

typedef struct {

char key[256];

}ST_LOG_KEY;


typedef struct {

char content[256];

}ST_IP_CONTENT;

struct filter_st
{
	char *valuez;
	char *viewz;
	char *contentz;
	char *infos;  
	int fnum;
	struct filter_st *next;
};

struct dest_st
{
	char *valuez;
	char *contentz;
	char *sysipz;
	char *sysport;
	char *timeflag;
	char *indexz;
	int dnum;
	struct dest_st *next;
};

struct log_st
{
	char *flag;/*for mib!!*/
	char *keyz;
	char *filterz;
	char *sourcez;
	char *des;
	char *enablez;
	char *timeflag;
	char *sysipz;
	char *sysport;
	char *indexz;
	struct log_st *next;
};
struct opt_st
{
	char *contentz;
	struct opt_st *next;
};

struct source_st
{
    char *valuez;
	char *contentz;
	struct source_st *next;
};

typedef struct{
	struct opt_st     optst;
	int optnum;
	struct source_st  sourst;
	int sournum;
	struct filter_st  filtst;
	int filtnum;
	struct dest_st    destst;
	int destnum;
	struct log_st     logst;
	int lognum;
}SYSLOGALL_ST;


static const char *filterlist[] = {
	"f_at_least_crit",
	"f_at_least_err",
	"f_at_least_warn",
	"f_at_least_notice",
	"f_at_least_info",
	"f_debug",
};


/*�������֣��ɷ�Ϊ���ϲ��õģ����ڲ����õġ�*/

extern int read_filter(char * name,char * node_name, ST_SYS_ALL *sysall); //��xml���ݲ��洢

extern int write_config( ST_SYS_ALL *sysall, char *file_path ); //д�뵽conf�ļ���

extern int add_node(char * name,char * node_name); //���ָ���ڵ�

extern int mod_log_node(char * fpath,char * node_name,char *attribute,char *ruler,char * content,char *newc);


extern int start_syslog(); //��������

extern int stop_syslog();  //ֹͣ����
 
extern int restart_syslog(); //��������

extern int is_file_exist( char *filtpath ); //�ж��ļ����ڷ�

/*ȡ��ָ���ڵ�����*/
extern int find_log_node(char * fpath,char * node_name,char *attribute,char *ruler,char * content,ST_LOG_KEY *logkey);

/*��ȡ�����ַ���*/
extern int  cut_up(char *dstring,ST_LOG_KEY *keys,char *ruler);

extern int ip_save(char *fpath,char *value); //�洢ip�ַ���

extern int  line_num(char *fpath,char *cmd); //���ļ�����Ӧ����

extern int get_ip(char *fpath,ST_IP_CONTENT * ip); //���ļ���ճ�ַ���

extern int check_abc_d(char *ff); //����ַ������Ƿ���ĸ 

extern int if_subs(char *zstring,char *subs); //�ж�һ���Ƿ�����һ�����Ӵ����Ǿͷ���2�����Ƿ���0

extern int read_ntp(char * name, ST_SYS_ALL *sysall);  //��ntp�� xml�ļ�

extern int write_ntp( ST_SYS_ALL *sysall, char *file_path); //��ntp��conf�ļ�

extern int restart_ntp(); //ntp��������

extern int start_ntp(); //����ntp����

extern int stop_ntp();  //ֹͣntp����

extern int add_ntp_node(char *fpath,char * node_name,char * value,char *content); //���һ����Ӧ�Ľڵ�

extern int add_ntp_node_new(char *fpath,char * node_name,char * value,char *content,char *attribute);

extern int ntp_del(char *fpath,char *node_name,char *attribute,char *key);  //ɾ��ĳ�����ԵĽڵ�

extern int find_ntp_node(char * fpath,char * node_name,char *attribute,char *ruler,char * content,char *logkey);

extern int mod_ntp_node(char * fpath,char * node_name,char *attribute,char *ruler,char * content,char *newc);

extern int  cut_up_ip(char *dstring,char *ip);

extern char *replace_ip(char *strbuf, char *sstr, char *dstr);

extern int  cut_up_port(char *dstring,char *port); //��ȡ�˿�

extern char *first_port(char *dstring);

extern int get_cli_syslog_state();

extern inline void reset_sigmask();

/*xml�����ݣ��ڵ������ԣ�fpath:xml�ļ�·����nodename�������ڵ����ƣ�content�������ڵ����ƣ�newc�����ĵ�������*/
extern int mod_second_xmlnode(char * fpath,char * node_name,char * content,char *newc,int flagz);

/*����ָ���ڵ㣬fpath��xml�ļ�·����nodename������xml�ڵ�����content������xml�ڵ�����keyz������xml�ڵ��������ݣ�flagz�����xml*/
extern int find_second_xmlnode(char * fpath,char * node_name,char * content,char *keyz,int *flagz);

/*xml�����ݣ��ڵ������ԣ�fpath:xml�ļ�·����nodename�������ڵ����ƣ�content�������ڵ����ƣ�newc�����ĵ�������*/
extern int get_second_xmlnode(char * fpath,char * node_name,char * content,char *gets,int flagz);

/*��Ӷ����ڵ㲢����fpath:xml file path,node_name:second level node,content:sub second node name,keyz:node content*/
extern int add_second_xmlnode(char * fpath,char * node_name,ST_SYS_ALL *sysall);

extern void Free_read_dest_xml(struct dest_st *head);
extern int read_dest_xml(struct dest_st *chead,int *confnum);

extern void Free_read_log_xml(struct log_st *head);
extern int read_log_xml(struct log_st *chead,int *confnum);

extern void Free_read_filter_xml(struct filter_st * head);
extern int read_filter_xml(struct filter_st * chead, int * confnum);

extern void Free_read_opt_xml(struct opt_st * head);
extern int read_opt_xml(struct opt_st * chead, int * confnum);

extern void Free_read_source_xml(struct source_st * head);
extern int read_source_xml(struct source_st * chead, int * confnum);

extern int read_syslogall_st(char * xmlpath,SYSLOGALL_ST *sysall);
extern void Free_read_syslogall_st(SYSLOGALL_ST *sysall);
extern int write_config_syslogallst( SYSLOGALL_ST *sysall, char *file_path) ;

extern int del_second_xmlnode(char * fpath,char * node_name,int flagz);
extern int add_syslog_server( char *xml_fpath, int enable, char *ip, int port, int filter ,int indexz);
extern int mod_syslog_server( char *xml_fpath, char *timeflag, int enable, char *ipaddr, int port, int filter );
extern int del_syslog_server( char *xml_fpath, int idindex );
extern void save_syslog_file();
extern void if_syslog_exist();
extern int get_first_xmlnode(char *xmlpath,char *node_name,char *newc);
extern int mod_first_xmlnode(char *xmlpath,char *node_name,char *newc);
extern void Free_read_ntp_server(struct ntp_server_st *head);
extern int read_ntp_server(char * name, struct ntp_server_st *head);
extern int del_ntp_node(char * fpath,char * node_name,char *attribute,char *ruler);
#endif
