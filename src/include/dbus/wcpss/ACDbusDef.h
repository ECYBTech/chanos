#ifndef _WID_DBUS_DEF_H
#define _WID_DBUS_DEF_H

#define WID_DBUS_BUSNAME	"aw.wid"
#define WID_DBUS_OBJPATH	"/aw/wid"
#define WID_DBUS_INTERFACE	"aw.wid"

enum wid_dbus_result_no_e {
	WID_RETURN_CODE_SUCCESS,
	WID_RETURN_CODE_ERROR, /* general use, no detail error information*/
	WID_QOS_BE_USED,
	WID_QOS_NOT_EXIST,
	WID_QOS_RADIO_SHOULD_BE_DISABLE,
	WID_QOS_WMM_MAP_DISABLE,
	WID_QOS_STREAM_ERROR,
	WID_EBR_ERROR,
	WID_EBR_BE_USED,
	WID_EBR_NOT_EXIST,
	WID_EBR_SHOULD_BE_DISABLE,
	WID_WTP_LOCATION_NOT_SET,
	WID_UNKNOWN_ID,
	WID_NO_SURPORT_MODEL,
	WID_NO_WHITELIST,
	WID_NO_BLACKLIST,
	WID_AP_SCANNING_DISABLE,
	WID_AP_NO_STATICS,
	WID_NEED_REBOOT,
	WID_DBUS_MSG_NO_REPLY,	
	WID_COUNTRY_CODE_SAME,
	WLAN_ID_BE_USED,
	WLAN_ID_NOT_EXIST,
	WLAN_BE_ENABLE,
	Wlan_IF_NOT_BE_BINDED,
	WLAN_NOT_BINDING_IF,
	WLAN_CREATE_L3_INTERFACE_FAIL,
	WLAN_DELETE_L3_INTERFACE_FAIL,
	WLAN_CREATE_BR_FAIL,
	WLAN_DELETE_BR_FAIL,
	WLAN_BE_DISABLE,
	WLAN_NOT_BINDING_VLAN,
	WLAN_BINDING_VLAN,
	WTP_ID_BE_USED,
	WTP_ID_NOT_EXIST,
	WTP_BE_USING,	
	WTP_IF_NOT_BE_BINDED,
	WTP_WLAN_BINDING_NOT_MATCH,
	WTP_CLEAR_BINDING_WLAN_SUCCESS,
	WTP_NO_SURPORT_TYPE,
	WTP_NO_SURPORT_Rate,
	WTP_OVER_MAX_BSS_NUM,
	WTP_IS_NOT_BINDING_WLAN_ID,
	WTP_NOT_IN_RUN_STATE,
	WTP_OVER_MAX_NUM,
	WTP_LESS_THAN_STATIC_WTP,
	WTP_SN_BE_USED,
	WTP_NO_NEIGHBORAP,
	WTP_WEP_NUM_OVER,
	WTP_ID_LARGE_THAN_MAX,
	WTP_MAC_BE_USED,
	WTP_LAN_VLAN_ENABLED,
	WTP_LAN_VLAN_DISABLED,
	BSS_NOT_EXIST,
	BSS_CREATE_L3_INTERFACE_FAIL,
	BSS_DELETE_L3_INTERFACE_FAIL,
	BSS_L3_INTERFACE_ADD_BR_FAIL,
	BSS_L3_INTERFACE_DEL_BR_FAIL,
	BSS_BE_ENABLE,
	BSS_IF_NEED_DELETE,
	RADIO_ID_NOT_EXIST,
	RADIO_IS_DISABLE,
	RADIO_SUPPORT_RATE_NOT_EXIST,
	RADIO_SUPPORT_MAX_RATE_NOT_ONE,
	RADIO_SUPPORT_RATE_CONFLICT,
	RADIO_SUPPORT_RATE_EMPTY,
	RADIO_NO_BINDING_WLAN,
	RADIO_ID_LARGE_THAN_MAX,
	RADIO_MODE_IS_11N,
	RADIO_NO_BINDING_WQOS,
	WTP_NOT_SURPORT_CHANNEL,
	APPLY_IF_FAIL,
	INTERFACE_NOT_BE_BINDED,
	INTERFACE_NOT_EXIST,
	SYSTEM_CMD_ERROR,
	L3_INTERFACE_ERROR,
	AUTO_AP_LOGIN_INTERFACE_ERROR,
	AUTO_AP_LOGIN_INTERFACE_NOT_SET,
	SUPPORT_VERSION_NOT_EXIST,
	VERSION_NOT_SUPPORTED,
	SAMPLE_THROUGHPUT_NOT_ENABLE,
	IF_POLICY_CONFLICT,
	MALLOC_ERROR,
	SWITCH_IS_DISABLE,
	TXPOWER_OVER_TW,
	TXPOWER_OVER_TW_THREE,
	MODEL_NO_EXIST,
	RAOMING_DISABLE_FIRST,
	ISOLATION_CONFLICT,
	WDS_MODE_BE_USED,
	NO_WIDS_DEVICE,
	NO_SURPPORT_IPIP,
	UPDATE_PROCESS,
	AC_IP_EXIST,
	AC_IP_NOT_EXIST,
	AC_IP_BIND_IF_EXIST,
	ETH_NOT_EXIST,
	MAC_DOESNOT_EXIT,
	MAC_ALREADY_EXIT,
	CAPWAP_NOT_ENABLE,
	WID_RETURN_CODE_FINISH_ITER,
	WID_NO_AP_MODEL_MATCH,
	WID_TUNNEL_END_IS_SET,
    RADIO_MODE_IS_NOT_11N,
    WTP_IN_RUN_STATE,
    RADIO_HT_IS_NOT_40,
    WID_PREFERRED_AC_IS_SET
};



/*
 arg lists for method WID_DBUS_CONF_METHOD_SHOWWLAN
  in arg list:
	BYTE WlanID //ID of WLAN which is unique sign of wlan
  out arg list:  // in the order as they are appended in the dbus message.
	STRING 	WLANNAME//name of wlan
	BYTE 	WLANID//ID of WLAN which is unique sign of wlan
	STRING 	ESSID//essid of wlan
	BYTE	AAW//aute add wtp 0(disable)/1(default enable)
	BYTE	STATUS//WLAN Status 0(default disable)/1(enable)
	BYTE	VID//num of vlan which wlan in
	BYTE	Wlan_Index
*/
#define WID_DBUS_CONF_METHOD_SHOWWLAN										"show_wlan"
#define WID_DBUS_CONF_METHOD_GET_AP_IN_WLAN									"get_ap_in_wlan"
#define WID_DBUS_CONF_METHOD_GET_WLAN_IN_VLAN								"get_wlan_in_vlan"

#define WID_DBUS_CONF_METHOD_WLANLIST										"show_wlan_list"

#define WID_DBUS_CONF_METHOD_WTPLIST_BYMAC									"show_wtp_list_bymac"
#define WID_DBUS_CONF_METHOD_WTPLIST_NEW									"show_wtp_list_new"
#define WID_DBUS_CONF_METHOD_WTPLIST_UPDATE									"show_wtp_list_update"
#define WID_DBUS_CONF_METHOD_AC_ACCESS_WTPLIST								"show_ac_access_wtp_list"
#define WID_DBUS_CONF_METHOD_CLEAN_AC_ACCESS_WTPLIST						"clean_ac_access_wtp_list"
#define WID_DBUS_CONF_METHOD_OLD_AP_IMG										"old_ap_img_op"
/*add by nl for showing wtp information for mib need 20100507*/
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_BASIC_INFORMATION					"show_all_wtp_basic_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_COLLECT_INFORMATION				"show_all_wtp_collect_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_PARA_INFORMATION					"show_all_wtp_para_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_WIRELESS_IFSTATS_INFORMATION		"show_all_wtp_wireless_ifstats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_DEVICE_INFORMATION				"show_all_wtp_device_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_DATA_PKTS_INFORMATION				"show_all_wtp_data_pkts_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_STATS_INFORMATION					"show_all_wtp_stats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WLAN_STATS_INFORMATION				"show_all_wlan_stats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WLAN_SSID_STATS_INFORMATION			"show_all_wlan_ssid_stats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_IFNAME_INFORMATION				"show_all_wtp_ifname_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_RADIO_PARA_INFOR_INFORMATION		"show_all_wtp_radio_para_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_ETH_PORT_INFORMATION				"show_all_wtp_eth_port_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_RADIO_STATS_INFORMATION			"show_all_wtp_radio_stats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_RADIO_CONFIG_INFORMATION			"show_all_wtp_radio_config_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_WIRED_STATS_INFORMATION			"show_all_wtp_wired_ifstats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_WIRELESS_STATS_INFORMATION		"show_all_the_wtp_wireless_if_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_NEW_WTPWIRELESS_IF_INFORMATION	"show_all_wtp_new_wireless_if_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_NEW_WTP_WIRELESS_IFSTATS_INFORMATION	"show_all_wtp_new_wireless_ifstats_information"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_ROGUE_WTP_INFORMATION					"show_all_rogue_ap_information"


/*luzhenhua append  2010-05-26 */
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WTP_WLAN_DATA_PKTS_INFORMATION		"show_all_wtp_wlan_data_pkts_information"


#define WID_DBUS_CONF_METHOD_SHOW_ALL_WIFI_INTERFACES_CONFIGURATION			"show_all_wifi_interface_configuration"
#define WID_DBUS_CONF_METHOD_SHOW_ALL_WIFI_SUB_INTERFACES_CONFIGURATION	    "show_all_wifi_sub_interface_configuration"
#define WID_DBUS_CONF_METHOD_SHOW_SPECIFY_WIFI_INTERFACES_CONFIGURATION		"show_specify_wifi_interface_configuration"
#define WID_DBUS_CONF_METHOD_SHOW_SPECIFY_WIFI_SUB_INTERFACES_CONFIGURATION	"show_specify_wifi_sub_interface_configuration"





#define WID_DBUS_CONF_METHOD_ACVERSION										"show_ac_version"
#define WID_DBUS_CONF_METHOD_ECHOTIMER										"show_ap_echotimer"

#define WID_DBUS_CONF_METHOD_WLAN_SHOW_RUNNING_CONFIG_START					"wlan_show_running_config_start"

#define WID_DBUS_CONF_METHOD_WLAN_SHOW_RUNNING_CONFIG_END					"wlan_show_running_config_end"

#define WID_DBUS_CONF_METHOD_WTP_SHOW_RUNNING_CONFIG_START					"wtp_show_running_config_start"

#define WID_DBUS_CONF_METHOD_WTP_SHOW_RUNNING_CONFIG_END					"wtp_show_running_config_end"
/*
 arg lists for method WID_DBUS_CONF_METHOD_WLAN
  in arg list:
	BYTE WlanID //ID of WLAN which is unique sign of wlan
  out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_CONF_METHOD_WLAN											"wlan"


/*
 arg lists for method WID_DBUS_CONF_METHOD_SHOWWTP
  in arg list:
	BYTE WTPID //ID of WTP which is unique sign of wtp
  out arg list:  // in the order as they are appended in the dbus message.
	STRING 	WTPNAME//name of wtp
	BYTE 	WTPID//ID of wtp which is unique sign of wtp
	UNIT32	WTPSN//sn of wtp
	UNIT32	WTPMOD//model of wtp
	STRING	WTPIP//ip of wtp
	STRING	WTPMAC//mac of wtp
	BYTE	CTR_ID//id of control tunnel
	BYTE	DTA_ID//id of data tunnel
*/
#define	WID_DBUS_CONF_METHOD_SHOWWTP			"show_wtp"

#define	WID_DBUS_WTP_METHOD_SHOW_WTP_MODEL_CODE_VERSION	"show_wtp_model_code_version"


/*
 arg lists for method WID_DBUS_CONF_METHOD_WTP
  in arg list:
	BYTE WTPID //ID of WLAN which is unique sign of wlan
  out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_CONF_METHOD_WTP				"wtp"


/*
 arg lists for method WID_DBUS_CONF_METHOD_SHOWRADIO
  in arg list:
	BYTE Radio_G_ID //global ID of radio which is unique sign of radio
  out arg list:  // in the order as they are appended in the dbus message.
	BYTE	WTPID
	BYTE	Radio_G_ID
	BYTE	Radio_L_ID
	UNIT32	Radio_TYPE//type of Radio(a/b/g/n)
	BYTE	Radio_Chan//channel of radio
	UNIT16	Radio_TXP//tx power of radio
	BYTE	AdStat//state of admin
	BYTE	OpStat//state of operate
*/
#define	WID_DBUS_CONF_METHOD_SHOWRADIO			"show_radio"

#define WID_DBUS_CONF_METHOD_RADIOLIST			"show_radio_list"
#define WID_DBUS_CONF_METHOD_RADIO				"radio"

/*
 arg lists for method WID_DBUS_CONF_METHOD_ADD_DEL_WLAN
  in arg list:
	BYTE	isADD //determine ADD(1) or DEL(0)	
  	STRING  WLANNAME//name of wlan
  	BYTE	  WLANID//ID of WLAN which is unique sign of wlan
  	STRING  ESSID//essid of wlan
  out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
/*
 arg lists for method WID_DBUS_CONF_METHOD_ADD_DEL_WTP
  in arg list:
	BYTE	isADD //determine ADD(1) or DEL(0)	
	STRING 	WTPNAME//name of wtp
	BYTE 	WTPID//ID of wtp which is unique sign of wtp
	UNIT32	WTPSN//sn of wtp
	UNIT32	WTPMOD//model of wtp
  out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define	WID_DBUS_CONF_METHOD_ADD_DEL_WTP		"add_del_wtp"

#define	WID_DBUS_CONF_METHOD_ADD_DEL_WTP_BY_MAC	"add_del_wtp_by_mac"


#define WID_DBUS_CONF_METHOD_UPDATE_WTP_COUNT	"update_wtp_count"
	
#define	WID_DBUS_WLAN_OBJPATH					"/aw/wid/wlan"
#define WID_DBUS_WLAN_INTERFACE					"aw.wid.wlan"


#define	WID_DBUS_CAPWAP_OBJPATH					"/aw/wid/capwap"
#define WID_DBUS_CAPWAP_INTERFACE				"aw.wid.capwap"
/*
arg lists for method WID_DBUS_CONF_METHOD_WLAN_ENABLE
 in arg list:
   	BYTE	WlanID//id of wlan which you want enable or disable
  	BYTE	DisWLAN //determine disable(1) or enable(0)WLAN  
out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_WLAN_METHOD_ENABLE				"wlan_enable"
#define WID_DBUS_WDS_METHOD_ENABLE				"wds_enable"


#define WID_DBUS_WLAN_METHOD_GET_STATUS			"wlan_get_status"
/*
arg lists for method WID_DBUS_CONF_METHOD_WLAN_APPLY_IF
 in arg list:
   	BYTE	WlanID//id of wlan which you want enable or disable
  	STRING	interface//which interface wlan apply  
out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_WLAN_METHOD_APPLY_IF	"wlan_apply_if"

#define WID_DBUS_WTP_METHOD_APPAY_WTP_IFNAME_IPV6   "apply_wtp_ifname_ipv6"
#define WID_DBUS_WTP_METHOD_APPAY_WTP_MAX_STA   "wtp_max_sta"
#define WID_DBUS_WTP_METHOD_APPAY_WTP_TRIGER   "wtp_triger"
#define WID_DBUS_WTP_METHOD_APPAY_WTP_FLOW_TRIGER   "wtp_flow_triger"

#define WID_DBUS_WTP_METHOD_LAN_VLAN							"set_wtp_lan_vlan"

#define WID_DBUS_WTP_METHOD_APPAY_WTP_WLANID					"apply_wtp_wlanid"
#define WID_DBUS_WLAN_METHOD_APPAY_WLAN_IFNAME_IPV6				"apply_wlan_ifname_ipv6"

#define WID_DBUS_WLAN_METHOD_APPAY_WLAN_MAX_STA					"wlan_max_sta"

#define WID_DBUS_WLAN_METHOD_APPAY_WLAN_BALANCE_PARA			"wlan_balance_para" /*xm  08/12/29*/
#define WID_DBUS_WLAN_METHOD_APPAY_WLAN_FLOW_BALANCE_PARA		"wlan_flow_balance_para" /*xm  09/02/05*/

#define WID_DBUS_WLAN_METHOD_APPAY_WLAN_BALANCE_SWITCH			"wlan_balance_switch" /*xm  08/12/29*/
#define WID_DBUS_WTP_METHOD_WTP_USED							"wtp_used"
/*added by weiay 20080701*/
#define WID_DBUS_WTP_METHOD_DELETE_WLAN_ID						"wtp_delete_wlan_id"
#define WID_DBUS_WTP_METHOD_DISABLE_WLAN_ID						"wtp_disable_wlan_id"
//#define WID_DBUS_WTP_METHOD_ENABLE_WLAN_ID					"wtp_enable_wlan_id"
#define WID_DBUS_WTP_METHOD_SHOW_WLAN_ID						"wtp_show_wlan_id"
#define WID_DBUS_WTP_METHOD_SET_VERSION_PATH					"wtp_set_version_path"/*xm 08/08/29*/
#define WID_DBUS_WTP_METHOD_CONFIG_PORT_ENABLE					"wtp_configure_port_enable"/*xm 08/09/01*/
#define WID_DBUS_WTP_METHOD_CONFIG_PORT							"wtp_configure_port"/*xm 08/09/01*/
#define WID_DBUS_WTP_METHOD_SET_WTPNAME							"wtp_set_wtpname"
#define WID_DBUS_WTP_METHOD_SET_WTPSN							"wtp_set_wtpsn"


#define WID_DBUS_WTP_METHOD_SET_WTP_EXTENSION_INFOMATION_SWITCH	"set_extension_infomation_switch"
#define WID_DBUS_WTP_METHOD_SET_WTP_EXTENSION_INFOMATION_REPORTINTERVAL	"set_extension_infomation_reportinterval"

#define WID_DBUS_WTP_METHOD_SET_WTP_STA_INFOMATION_SWITCH		"set_sta_infomation_switch"
#define WID_DBUS_WTP_METHOD_SET_WTP_STA_INFOMATION_REPORTINTERVAL	"set_sta_infomation_reportinterval"

#define WID_DBUS_WTP_METHOD_SET_WTP_STA_WAPI_INFO_SWITCH		"set_sta_wapi_info_switch"
#define WID_DBUS_WTP_METHOD_SET_WTP_STA_WAPI_INFO_REPORTINTERVAL	"set_sta_wapi_info_reportinterval"
#define WID_DBUS_WTP_METHOD_SET_WTP_CHECK_WLANID      			"check_wlan_id"

#define WID_DBUS_WTP_METHOD_SET_WTP_WIDS_INTERVAL      			"set_wtp_wids_interval"
#define WID_DBUS_WTP_METHOD_SET_WTP_WIDS_THRESHOLD      		"set_wtp_wids_threshold"
#define WID_DBUS_WTP_METHOD_SET_WTP_WIDS_LASTTIME_IN_BLACK      "set_wtp_wids_lasttime_in_black"

#define WID_DBUS_WTP_METHOD_SET_WTP_IF_INFO_SWITCH      		"set_ap_if_infomation_switch"
#define WID_DBUS_WTP_METHOD_SET_WTP_USERNAME_PASSWORD 			"set_ap_username_password"

#define WID_DBUS_WTP_METHOD_SET_WTP_WIDS_SET      				"set_ap_wids_set"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_WIDS_SET     				"show_ap_wids_set"

#define WID_DBUS_WTP_METHOD_SET_WTP_IF_INFO_REPORTINTERVAL      "set_ap_if_infomation_reportinterval"
#define WID_DBUS_WTP_METHOD_SET_WTP_INTERFACE_UPDOWN      		"set_ap_interface_updown"
#define WID_DBUS_WTP_METHOD_SET_WTP_INTERFACE_ETH_RATE      	"set_ap_interface_eth_rate"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_IF_INFO      				"show_ap_interface_info"

#define WID_DBUS_WTP_METHOD_UPDATE_WTP_CONFIG      				"update_ap_config"
#define WID_DBUS_WTP_METHOD_SET_WTP_REBOOT      				"set_ap_reboot"
#define WID_DBUS_WTP_METHOD_SET_WTP_REBOOT_ALL      			"set_ap_reboot_all"
#define WID_DBUS_WTP_METHOD_SET_WTP_REBOOT_BY_WLANID      		"set_ap_reboot_by_wlanid"
#define WID_DBUS_WTP_METHOD_SET_WTP_REBOOT_BY_MODEL      		"set_ap_reboot_by_model"
#define WID_DBUS_WTP_METHOD_SET_WTP_REBOOT_BY_LIST      		"set_ap_reboot_by_list"

#define WID_DBUS_WTP_METHOD_GET_WTP_BSS_PKT_INFO      			"get_wtp_bss_pkt_info"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_BSS_PKT_INFO      			"show_wtp_bss_pkt_info"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_RADIO_PKT_INFO      		"show_wtp_radio_pkt_info"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_RADIO_PKT_INFO_TUNNEL      "show_wtp_radio_pkt_info_tunnel"
#define WID_DBUS_WTP_METHOD_SHOW_WTP_ETH_PKT_INFO     			"show_wtp_eth_pkt_info"

#define WID_DBUS_WTP_METHOD_SHOW_WTP_WIFI_SNR_INFO      		"show_wtp_wifi_snr_info"

#define WID_DBUS_WTP_METHOD_SET_PORT_VLAN_SECURITY    			"wtp_set_port_vlan_security"  /*sz20080827*/
#define WID_DBUS_WTP_METHOD_SET_PORT_VLAN_ENABLE   				"wtp_set_port_vlan_enable"  /*sz20080827*/
#define WID_DBUS_WTP_METHOD_SET_SECURITY   	        			"wtp_set_security"  /*sz20080827*/
#define WID_DBUS_WTP_METHOD_SET_VLAN_LIST_ENABLE   	  			"wtp_set_vlan_list_enable"  /*sz20080827*/
#define WID_DBUS_WTP_METHOD_DELETE_AP_MODEL						"wtp_delete_model"
#define WID_DBUS_WTP_METHOD_SET_AP_TIMER	   					"wtp_set_ap_echotimer"
#define WID_DBUS_WTP_METHOD_SET_AP_COLLECT_TIME					"wtp_set_ap_collect_time"/*nl add 20100630*/
#define WID_DBUS_WLAN_METHOD_SHOW_IF            				"wlan_show_if"
#define WID_DBUS_WLAN_METHOD_HIDE_ESSID         				"wlan_hide_essid"

#define WID_DBUS_WLAN_METHOD_CONFIG_FORWARD_MODE         		"wlan_configure_forward_mode"
#define WID_DBUS_WLAN_METHOD_CONFIG_SWITCHPORT_PVID         	"wlan_configure_switchport_pvid"
#define CW_CONFIGURE_CAPWAP_GLOBAL_ENABLE_DISABLE				"capwap_global_enable_disable"
#define CW_CONFIGURE_CAPWAP_L3_interface_ENABLE_DISABLE			"capwap_l3_interface_enable_disable"
#define CW_SHOW_CAPWAP_CONFIGURATION							"capwap_show_configuration"
#define CW_CONFIGURE_CAPWAP_PREFERRED_AC			            "capwap_set_preferred_ac"

#define CW_DBUS_WIFI_INDICATOR_MODE_CONFIGURATION				"wifi_indicator_mode_configuration"
#define CW_DBUS_WIFI_INDICATOR_MODE_GET_CONFIG					"wifi_indicator_mode_get_configuration"
#define CW_DBUS_WIFI_INDICATOR_STA_THRESHOLD_CONFIGURATION		"wifi_indicator_switch_freq_sta_threshold_configuration"


#define WID_DBUS_WLAN_METHOD_SET_NAS_IDENTIFIER    				"set_interface_identifier"	
#define WID_DBUS_WLAN_METHOD_REMOVE_NAS_IDENTIFIER    			"remove_interface_identifier"
#define WID_DBUS_WLAN_METHOD_ROAMING_POLICY						"wlan_roaming_policy" /*zhanglei add*/
#define WID_DBUS_WLAN_METHOD_SET_BRIDGE_ISOLATION				"wlan_set_bridge_isolation" 
#define WID_DBUS_WLAN_METHOD_SET_BRIDGE_MULTICAST_ISOLATION		"wlan_set_bridge_multicast_isolation" 
#define WID_DBUS_WLAN_METHOD_SHOW_BRIDGE_ISOLATION				"wlan_show_bridge_isolation" 
#define WID_DBUS_WLAN_METHOD_SET_BRIDGE_SAMEPORTSWICTH			"wlan_set_bridge_sameportswitch" 
#define WID_DBUS_WLAN_METHOD_SET_ESSID							"wlan_set_essid" 

#define WID_DBUS_WLAN_METHOD_UNDO_WLAN_VLANID					"wid_dbus_wlan_undo_wlan_vlanid"
#define WID_DBUS_WLAN_METHOD_SET_WLAN_VLANID					"wid_dbus_wlan_set_wlan_vlanid"

#define WID_DBUS_WLAN_METHOD_SET_TUNNEL_WLAN_VLAN				"wid_dbus_wlan_set_tunnel_wlan_vlan"
#define WID_DBUS_WLAN_METHOD_SHOW_TUNNEL_WLAN_VLAN				"wid_dbus_wlan_show_tunnel_wlan_vlan"

#define WID_DBUS_WLAN_METHOD_WHOLE_WLAN_TRAFFIC_LIMIT_VALUE		"wlan_set_traffic_limit_value"
#define WID_DBUS_WLAN_METHOD_WHOLE_WLAN_SEND_TRAFFIC_LIMIT_VALUE	"wlan_set_send_traffic_limit_value"



#define WID_DBUS_WLAN_METHOD_SET_WLAN_VLAN_PRIORITY				"wid_dbus_wlan_set_wlan_vlan_priority"
#define WID_DBUS_WLAN_METHOD_SHOW_WLAN_VLAN_INFO				"wid_dbus_wlan_show_wlan_vlan_info"
#define WID_DBUS_WLAN_METHOD_SHOW_WLAN_PTK_INFO					"wid_dbus_wlan_show_wlan_ptk_info"


#define WID_DBUS_WLAN_METHOD_CONFIGURE_WLAN_NAME				"wid_dbus_wlan_configure_wlan_name"
#define WID_DBUS_WLAN_METHOD_CONFIGURE_WLAN_ESSID				"wld_dbus_wlan_configure_wlan_essid"

/*added end 20080701*/

#define WID_DBUS_WTP_OBJPATH	"/aw/wid/wtp"
#define WID_DBUS_WTP_INTERFACE	"aw.wid.wtp"



#define	WID_DBUS_RADIO_OBJPATH	"/aw/wid/radio"
#define WID_DBUS_RADIO_INTERFACE	"aw.wid.radio"

/*
arg lists for method WID_DBUS_CONF_METHOD_RADIO_STXP
 in arg list:
   	BYTE	Radio_G_ID//Global id of Radio
	UNIT16	Radio_TXP//tx power of radio
out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_RADIO_METHOD_SET_TXP	"radio_set_txpower"
#define WID_DBUS_RADIO_METHOD_SET_TXPOF	"radio_set_txpowerof"

/*
arg lists for method WID_DBUS_CONF_METHOD_RADIO_SCHAN
 in arg list:
   	BYTE	Radio_G_ID//Global id of Radio
	BYTE	Radio_Chan//channel of radio
out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_RADIO_METHOD_SET_CHAN	"radio_set_channel"
/*added by weiay 20080714*/

#define WID_DBUS_RADIO_METHOD_SET_RATE	"radio_set_rate"
#define WID_DBUS_RADIO_METHOD_SET_CWMODE	"radio_set_cwmode"
#define WID_DBUS_RADIO_METHOD_SET_CHANNEL_OFFSET	"radio_set_channel_offset"
#define WID_DBUS_RADIO_METHOD_SET_MODE	"radio_set_mode"
#define WID_DBUS_RADIO_METHOD_SET_FRAGMENTATION	"radio_set_fragmentation"
#define WID_DBUS_RADIO_METHOD_SET_BEACON	"radio_set_beacon"
#define WID_DBUS_RADIO_METHOD_SET_RTSTHROLD	"radio_set_hidessic"
#define WID_DBUS_RADIO_METHOD_SET_DTIM	"radio_set_dtim"
#define WID_DBUS_RADIO_METHOD_SET_STATUS	"radio_set_status"
#define WID_DBUS_RADIO_METHOD_SET_WDS_STATUS	"wds_set_status"
#define WID_DBUS_RADIO_METHOD_SET_PREAMBLE	"radio_set_preamble"
#define WID_DBUS_RADIO_METHOD_SET_LONGRETRY	"radio_set_longretry"
#define WID_DBUS_RADIO_METHOD_SET_SHORTRETRY	"radio_set_shortretry"
#define WID_DBUS_RADIO_METHOD_SET_BSS_MAX_STA	"radio_set_max_bss_sta"


#define WID_DBUS_RADIO_METHOD_SET_SUPPORT_RATELIST	"radio_set_support_ratelist"
#define WID_DBUS_RADIO_METHOD_SET_MAX_RATE	"radio_set_max_rate"
#define WID_DBUS_RADIO_METHOD_SET_BSS_MAX_THROUGHPUT	"radio_set_bss_max_throughput"
#define WID_DBUS_RADIO_METHOD_SHOW_BSS_MAX_THROUGHPUT	"radio_show_bss_max_throughput"
#define WID_DBUS_RADIO_METHOD_SHOW_CHANNEL_CHANGE	"radio_show_channel_change"

#define WID_DBUS_RADIO_METHOD_RADIO_APPLY_WLANID_BASE_VLANID	"radio_apply_wlanid_base_vlanid"
#define WID_DBUS_RADIO_METHOD_RADIO_APPLY_WLANID_CLEAN_VLANID	"radio_apply_wlanid_clean_vlanid"
#define WID_DBUS_RADIO_METHOD_SET_RADIO_RX_DATA_DEAD_TIME	"radio_receive_data_dead_time"
#define WID_DBUS_RADIO_METHOD_SET_RADIO_RX_DATA_DEAD_TIME_SHOW	"radio_receive_data_dead_time_show"
#define WID_DBUS_RADIO_METHOD_SET_BSS_L3_IF_WLAN_BR	"set_bss_l3_if_wlan_br"
#define WID_DBUS_RADIO_METHOD_SHOW_RADIO_QOS	"show_radio_qos"

/*
arg lists for method WID_DBUS_CONF_METHOD_RADIO_APPLY_WLAN
 in arg list:
   	BYTE	Radio_G_ID//Global id of Radio
	BYTE	WlanID//id of wlan which radio apply
out arg list:  // in the order as they are appended in the dbus message.
	UNIT32	ret//success or fail(reason)
*/
#define WID_DBUS_RADIO_METHOD_APPLY_WLAN	"radio_apply_wlan"
#define WID_DBUS_RADIO_METHOD_DELETE_WLAN	"radio_delete_wlan"
#define WID_DBUS_RADIO_METHOD_ENABLE_WLAN	"radio_enable_wlan"
#define WID_DBUS_RADIO_METHOD_DISABLE_WLAN	"radio_diable_wlan"

#define WID_DBUS_RADIO_METHOD_WDS_WLAN_SET	"radio_wds_wlan_set"
#define WID_DBUS_RADIO_METHOD_SHOW_WDS_BSSID_INFO	"show_radio_wds_bssid_list"

#define WID_DBUS_RADIO_METHOD_REVOVER_DEFAULT_CONFIG	"radio_default_config"

#define WID_DBUS_RADIO_METHOD_SET_MAX_THROUGHOUT	"set_radio_max_thoughout"
#define WID_DBUS_RADIO_METHOD_SET_RADIO_L2_ISOLATION_ABLE          "set_radio_l2_isolation_able"
#define WID_DBUS_RADIO_METHOD_11N_SET_RADIO_CWMMODE          "set_radio_11n_cwmmode"
#define WID_DBUS_RADIO_METHOD_SHOW_BSS_LIST	"show_radio_bss_list"

#define WID_DBUS_RADIO_METHOD_SET_WTP_RADIO_AUTO_CHANNEL      "set_ap_radio_auto_channel"
#define WID_DBUS_RADIO_METHOD_SET_WTP_RADIO_AUTO_CHANNEL_CONT      "set_ap_radio_auto_channel_cont"
#define WID_DBUS_RADIO_METHOD_SET_WTP_RADIO_DIVERSITY      "set_ap_radio_diversity"
#define WID_DBUS_RADIO_METHOD_SET_WTP_RADIO_TXANTENNA      "set_ap_radio_txantenna"
#define WID_DBUS_RADIO_METHOD_INTER_VAP_FORVARDING_ABLE		"radio_inter_vap_forwarding_able"
#define WID_DBUS_RADIO_METHOD_INTRA_VAP_FORVARDING_ABLE		"radio_intra_vap_forwarding_able"
#define WID_DBUS_RADIO_METHOD_SET_KEEP_ALIVE_PERIOD		"radio_set_keep_alive_period"
#define WID_DBUS_RADIO_METHOD_SET_KEEP_ALIVE_IDLE_TIME	"radio_set_keep_alive_idle_time"
#define WID_DBUS_RADIO_METHOD_SET_CONGESTION_AVOID_STATE	"radio_set_congestion_avoid_state"



#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_ABLE	"radio_wlan_traffic_limit_able"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_VALUE	"radio_wlan_traffic_limit_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_AVERAGE_VALUE	"radio_wlan_traffic_limit_average_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_STA_VALUE	"radio_wlan_traffic_limit_sta_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_CANCEL_STA_VALUE	"radio_wlan_traffic_limit_cancel_sta_value"

#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_SEND_VALUE	"radio_wlan_traffic_limit_send_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_AVERAGE_SEND_VALUE	"radio_wlan_traffic_limit_average_send_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_STA_SEND_VALUE	"radio_wlan_traffic_limit_sta_send_value"
#define WID_DBUS_RADIO_METHOD_WLAN_TRAFFIC_LIMIT_CANCEL_STA_SEND_VALUE	"radio_wlan_traffic_limit_cancel_sta_send_value"
#define WID_DBUS_RADIO_METHOD_WLAN_SET_STA_VLANID	"radio_wlan_set_sta_vlanid"
#define WID_DBUS_RADIO_METHOD_WLAN_SET_STA_DHCP_BEFORE_AUTHERIZED	"radio_wlan_set_sta_dhcp_before_autherized"
#define WID_DBUS_RADIO_METHOD_WLAN_SET_STA_IP_MAC_BINDING	"radio_wlan_set_sta_ip_mac_binding"


#define	WID_DBUS_QOS_OBJPATH	"/aw/wid/qos"
#define WID_DBUS_QOS_INTERFACE	"aw.wid.qos"

#define WID_DBUS_QOS_METHOD_ADD_DEL_QOS		"add_del_qos"

#define WID_DBUS_QOS_METHOD_SHOW_QOS_LIST	"show_qos_list"
#define WID_DBUS_QOS_METHOD_SHOW_QOS		"show_qos"
#define WID_DBUS_QOS_METHOD_SHOW_RADIO_QOS_INFO		"show_radio_apply_qos_info"
#define WID_DBUS_QOS_METHOD_CONFIG_QOS		"config_qos"

#define WID_DBUS_QOS_METHOD_SET_QOS_INFO		"set_wid_radio_qos_info"
#define WID_DBUS_QOS_METHOD_SET_QOS_INFO_CLIENT		"set_wid_client_qos_info"
#define WID_DBUS_QOS_METHOD_SET_QOS_MAP		"set_wid_qos_wmm_map"
#define WID_DBUS_QOS_METHOD_SET_QOS_WMM_MAP_DOT1P		"set_wid_qos_wmm_map_dot1p"
#define WID_DBUS_QOS_METHOD_SET_QOS_DOT1P_MAP_WMM		"set_wid_qos_dot1p_map_wmm"

#define WID_DBUS_RADIO_METHOD_APPLY_QOS	"radio_apply_qos"
#define WID_DBUS_RADIO_METHOD_DELETE_QOS	"radio_delete_qos"
/*set wireless qos info for mib*/
#define WID_DBUS_QOS_METHOD_SET_QOS_TOTAL_BANDWIDTH		"set_wid_qos_total_bandwidth"
#define WID_DBUS_QOS_METHOD_SHOW_QOS_EXTENSION_INFO		"show_qos_extension_info"
#define WID_DBUS_QOS_METHOD_SET_QOS_FLOW_PARAMETER		"set_wid_qos_flow_parameter"
#define WID_DBUS_QOS_METHOD_SET_QOS_FLOW_PARAMETER_V2		"set_wid_qos_flow_parameter_v2"
#define WID_DBUS_QOS_METHOD_SET_QOS_FLOW_ABLE		"set_wid_qos_flow_able"
#define WID_DBUS_QOS_METHOD_SET_QOS_FLOW_ABLE_V2		"set_wid_qos_flow_able_v2"
#define WID_DBUS_QOS_METHOD_SET_QOS_PARAMETER		"set_wid_qos_parameter"
#define WID_DBUS_QOS_METHOD_SET_QOS_POLICY		"set_wid_qos_policy"
#define WID_DBUS_QOS_METHOD_SET_QOS_POLICY_NAME		"set_wid_qos_policy_name"
#define WID_DBUS_QOS_METHOD_SET_QOS_MANAGE_ARITHMETIC_NAME		"set_wid_qos_manage_arithmetic_name"

/*ethereal bridge infomation area*/
#define	WID_DBUS_EBR_OBJPATH	"/aw/wid/ebr"
#define WID_DBUS_EBR_INTERFACE	"aw.wid.ebr"

#define WID_DBUS_EBR_METHOD_ADD_DEL_EBR		"add_del_ebr"
#define WID_DBUS_EBR_METHOD_SHOW_EBR_LIST	"show_ebr_list"
#define WID_DBUS_EBR_METHOD_SHOW_EBR		"show_ebr"
#define WID_DBUS_EBR_METHOD_CONFIG_EBR		"config_ebr"
#define WID_DBUS_EBR_METHOD_CONFIG_EBR_ENABLE		"config_ebr_enable"

#define WID_DBUS_EBR_METHOD_SET_BRIDGE_ISOLATION		"ebr_set_bridge_isolation" 
#define WID_DBUS_EBR_METHOD_SET_BRIDGE_MULTICAST_ISOLATION		"ebr_set_bridge_multicast_isolation" 
#define WID_DBUS_EBR_METHOD_SET_EBR_ADD_DEL_IF		"ebr_set_ebr_add_del_if" 
#define WID_DBUS_EBR_METHOD_SET_BRIDGE_SAMEPORTSWITCH		"ebr_set_bridge_sameportswitch" 
#define WID_DBUS_EBR_METHOD_EBR_INTERFACE_EBR	"ebr_interface_ebr"

#define WID_DBUS_CONF_METHOD_EBR_SHOW_RUNNING_CONFIG_START	"ebr_show_running_config_start"
#define WID_DBUS_CONF_METHOD_EBR_SHOW_RUNNING_CONFIG_END	"ebr_show_running_config_end"

/*
Wid config infomation 
*/

#define WID_DBUS_CONF_METHOD_ADD_OUI          "add_legal_oui"
#define WID_DBUS_CONF_METHOD_ADD_ESSID          "add_legal_essid"
#define WID_DBUS_CONF_METHOD_MODIFY_ESSID          "modify_legal_essid"
#define WID_DBUS_CONF_METHOD_ADD_ATTACK_MAC          "add_attack_ap_mac"

#define WID_DBUS_CONF_METHOD_DEL_OUI          "del_legal_oui"
#define WID_DBUS_CONF_METHOD_DEL_ESSID          "del_legal_essid"
#define WID_DBUS_CONF_METHOD_DEL_ATTACK_MAC       "del_attack_ap_mac"

#define WID_DBUS_CONF_METHOD_OUI_SHOW          "show_manufacturer_oui_list"
#define WID_DBUS_CONF_METHOD_ESSID_SHOW          "show_legal_essid_list"
#define WID_DBUS_CONF_METHOD_ATTACK_MAC_SHOW          "show_attack_mac_list"




#define WID_DBUS_CONF_METHOD_WIDCONFIG       "show_wid_config"	
#define WID_DBUS_CONF_METHOD_LEV3_PROTOCOL    "set_wid_lev3_protocol"	
#define WID_DBUS_CONF_METHOD_SECURITY_TYPE    "set_wid_security_type"	
#define WID_DBUS_CONF_METHOD_HW_VERSION       "set_wid_hw_version"	
#define WID_DBUS_CONF_METHOD_SW_VERSION       "set_wid_sw_version"
#define WID_DBUS_CONF_METHOD_AC_NAME          "set_wid_ac_name"

#define WID_DBUS_CONF_METHOD_MAX_WTP          "set_wid_max_wtp"
#define WID_DBUS_CONF_METHOD_MAX_MTU          "set_wid_max_mtu"
#define WID_DBUS_CONF_METHOD_LOG_SIZE          "set_wid_log_size"
#define WID_DBUS_CONF_METHOD_MAX_ALLOWED_AP_NUM				"set_max_allowed_ap_number"
#define WID_DBUS_CONF_METHOD_DAEMONLOG_DEBUG_OPEN          "set_wid_daemonlog_debug_open"

#define WID_DBUS_CONF_METHOD_AP_SCANNING          "set_ap_scanning"
#define WID_DBUS_CONF_METHOD_AP_SCANNING_REPORT_INTERVAL          "set_ap_scanning_report_interval"

#define WID_DBUS_CONF_METHOD_UPDATE_AP_SCANNING_INFO          "update_ap_scanning_info"
#define WID_DBUS_CONF_METHOD_ROGUE_AP_LIST          "show_rogue_ap_list"
#define WID_DBUS_CONF_METHOD_ROGUE_AP_THRESHOLD			"show_rogue_ap_threshold"

#define WID_DBUS_CONF_METHOD_ROGUE_AP_LIST_V1          "show_rogue_ap_list_v1"
#define WID_DBUS_CONF_METHOD_ROGUE_AP_LIST_BYWTPID          "show_rogue_ap_list_bywtpid"
#define WID_DBUS_CONF_METHOD_DYNAMIC_CHANNEL_SELECTION		"dynamic_channel_selection"
#define WID_DBUS_CONF_METHOD_NEIGHBOR_AP_LIST_BYWTPID          "show_neighbor_ap_list_bywtpid"
/*country code area*/
#define WID_DBUS_CONF_METHOD_SET_COUNTRY_CODE          "set_system_country_code"
#define WID_DBUS_CONF_METHOD_UNDO_COUNTRY_CODE          "undo_system_country_code"

#define WID_DBUS_CONF_METHOD_TRANSMIT_POWER_CONTROL		"transmit_power_control"
#define WID_DBUS_CONF_METHOD_TXPOWER_THRESHOLD		"set_txpower_threshold"
#define WID_DBUS_CONF_METHOD_ROGUE_AP_TRAP_THRESHOLD  "set_rogue_ap_threshold_trap"
#define WID_DBUS_CONF_METHOD_COVERAGE_THRESHOLD		"set_coverage_threshold"
#define WID_DBUS_CONF_METHOD_SHOW_NEIGHBOR_RSSI_INFO	"show_neighbor_rssi_info_bywtpid"
#define WID_DBUS_CONF_METHOD_CONTROL_SCOPE    "set_transmit_power_control_scope"	
/*auto ap area*/
#define WID_DBUS_CONF_METHOD_SET_WID_DYNAMIC_AP_LOGIN_SWITCH	"set_auto_ap_login_switch"
#define WID_DBUS_CONF_METHOD_SET_WID_DYNAMIC_AP_LOGIN_WLANID	"set_auto_ap_login_binding_wlanid"
#define WID_DBUS_CONF_METHOD_DEL_WID_DYNAMIC_AP_LOGIN_WLANID	"del_auto_ap_login_binding_wlanid"
#define WID_DBUS_CONF_METHOD_SET_WID_DYNAMIC_AP_LOGIN_SAVE_CONFIG_SWITCH	"set_auto_ap_login_save_config_switch"
#define WID_DBUS_CONF_METHOD_SET_WID_AP_AUTO_DETECT_CONFIG		"set_ap_auto_detect_config"
#define WID_DBUS_CONF_METHOD_SHOW_WID_DYNAMIC_AP_LOGIN_SAVE_CONFIG	"show_auto_ap_login_save_config"
#define WID_DBUS_CONF_METHOD_CLEAR_WID_DYNAMIC_AP_LOGIN_CONFIG	"clear_auto_ap_login_config"
#define WID_DBUS_CONF_METHOD_AP_STATISTICS          "set_ap_statistics"

#define WID_DBUS_CONF_METHOD_AP_TIMESTAMP          "set_ap_timestamp"
#define WID_DBUS_CONF_METHOD_AP_SHOW_STATISTICS_LIST      "show_ap_statistics_list"
#define WID_DBUS_CONF_METHOD_AP_SHOW_IPADDR      "show_ap_ip_bywtpid"


#define WID_DBUS_CONF_METHOD_SET_WID_AP_MAX_THROUGHOUT	"set_ap_max_thoughout"

#define WID_DBUS_CONF_METHOD_SET_WID_AP_EXTENSION_COMMAND	"set_ap_extension_command"


/*mib area*/
#define WID_TRAP_OBJPATH	"/aw/trap"
#define WID_TRAP_INTERFACE	"aw.trap"

#define WID_DBUS_TRAP_WID_WTP_ENTER_IMAGEDATA_STATE		"wid_wtp_enter_imagedata_state"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_CHANGE		"wid_wtp_channel_change"
#define WID_DBUS_TRAP_WID_WLAN_ENCRYPTION_TYPE_CHANGE		"wid_wlan_encryption_type_change"
#define WID_DBUS_TRAP_WID_WLAN_PRESHARED_KEY_CHANGE		"wid_wlan_preshared_key_change"
#define WID_DBUS_TRAP_WID_WTP_TRANFER_FILE		"wid_wtp_transfer_file"

#define WID_DBUS_TRAP_WID_WTP_CODE_START		"wid_dbus_trap_wtp_code_start"
#define WID_DBUS_TRAP_WID_WTP_ELECTRIFY_REGISTER_CIRCLE		"wid_dbus_trap_wtp_electrify_register_circle"
#define WID_DBUS_TRAP_WID_WTP_AP_DOWN		"wid_dbus_trap_wtp_ap_power_off"
#define WID_DBUS_TRAP_WID_WTP_AP_REBOOT		"wid_dbus_trap_wtp_ap_reboot"
#define WID_DBUS_TRAP_WID_WTP_IP_CHANGE_ALARM		"wid_dbus_trap_wtp_ip_change_alarm"
#define WID_DBUS_TRAP_WID_WTP_ACTIMESYNCHROFAILURE		"wid_dbus_trap_wtp_ap_ACTimeSynchroFailure"
#define WID_DBUS_TRAP_WID_WTP_DEVICE_INTERFERENCE_DETECTED		"wid_dbus_trap_wtp_device_interference"
#define WID_DBUS_TRAP_WID_WTP_SHOW_RUNTIME		"wid_dbus_trap_wtp_show_runtime"
#define WID_DBUS_TRAP_WID_WTP_REMOTE_RESTART		"wid_dbus_trap_wtp_remote_restart"
#define WID_DBUS_TRAP_WID_WTP_DIVORCE_NETWORK		"wid_dbus_trap_wtp_divorce_network"
#define WID_DBUS_TRAP_WID_WTP_AP_FLASH_WRITE_FAIL		"wid_dbus_trap_wtp_ap_flash_write_fail"

#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_RUNTIME		"wid_dbus_show_wtp_runtime"
#define WID_DBUS_CONF_METHOD_SET_WID_WTP_LOCATION		"wid_dbus_set_wtp_location"
#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_LOCATION		"wid_dbus_show_wtp_location"
#define WID_DBUS_CONF_METHOD_SET_WID_WTP_NETID		"wid_dbus_set_wtp_netid"
#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_NETID		"wid_dbus_show_wtp_netid"
#define WID_DBUS_CONF_METHOD_SET_WID_MONITOR_TIME		"wid_dbus_set_monitor_time"
#define WID_DBUS_CONF_METHOD_SET_WID_SAMPLE_TIME		"wid_dbus_set_sample_time"
#define WID_DBUS_CONF_METHOD_SHOW_WID_SAMPLE_INFO		"wid_dbus_show_sample_info"
#define WID_DBUS_CONF_METHOD_SET_WID_MONITOR_ENABLE		"wid_dbus_set_monitor_enable"
#define WID_DBUS_CONF_METHOD_SET_WID_SAMPLE_ENABLE		"wid_dbus_set_sample_enable"
#define WID_DBUS_CONF_METHOD_SET_WID_IPFWD		"wid_dbus_set_ipfwd"
#define WID_DBUS_CONF_METHOD_SHOW_WID_IPFWD     "wid_dbus_show_ipfwd"

#define WID_DBUS_CONF_METHOD_SET_AP_UPDATE_TIMER	"wid_set_ap_update_timer"
#define WID_DBUS_CONF_METHOD_SHOW_AP_UPDATE_TIMER	"wid_show_ap_update_timer"

#define WID_DBUS_CONF_METHOD_SET_AP_L2_ISOLATION_ABLE          "set_ap_l2_isolation_able"
#define WID_DBUS_CONF_METHOD_SET_AP_PREVENT_DOS_ATTACK          "set_ap_prevent_dos_attack"
#define WID_DBUS_CONF_METHOD_SET_AP_IGMP_SNOOPING          "set_ap_igmp_snooping"
#define WID_DBUS_CONF_METHOD_SHOW_AP_MIB_INFO          "show_ap_mib_info"

#define WID_DBUS_CONF_METHOD_SET_AP_CM_THRESHOLD          "set_ap_cm_threshold"
#define WID_DBUS_CONF_METHOD_SET_WTP_ROGUEAP_ROGUETERMINAL_CPU_MEM_TRAP_THRESHOLD          "set_wtp_rogueap_terminal_cpu_mem_trap_threshold"
#define WID_DBUS_CONF_METHOD_SHOW_AP_CM_THRESHOLD          "show_ap_cm_threshold"
#define WID_DBUS_CONF_METHOD_SET_WTP_TRAP_SWITCH          "set_wtp_trap_swith"
#define WID_DBUS_CONF_METHOD_SHOW_AP_TRAP_ROGUE_AP_TERMINAL_CPU_MEM_THRESHOLD	"show_ap_trap_rogue_ap_terminal_cpu_mem_threshold"
#define WID_DBUS_CONF_METHOD_SHOW_AC_BALANCE_CONFIGURATION          "show_ac_balance_configuration"
#define WID_DBUS_CONF_METHOD_SHOW_AP_CM_STATISTICS          "show_ap_cm_statistics"

#define WID_DBUS_CONF_METHOD_AP_CHANNEL_DISTURB_TRAP          "set_ap_channel_disturb_trap"
#define WID_DBUS_CONF_METHOD_AP_SHOW_MODEL_INFOMATION      "show_ap_model_infomation"
#define WID_DBUS_CONF_METHOD_AP_SHOW_MODEL_CODE_INFOMATION      "show_ap_model_code_infomation"

#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_EXTENSION_INFOMATION      "show_ap_extension_infomation"
#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_EXTENSION_INFOMATION_V2      "show_ap_extension_infomation_v2"
#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_EXTENSION_INFOMATION_V3      "show_ap_extension_infomation_v3"
#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_EXTENSION_INFOMATION_V4      "show_ap_extension_infomation_v4"

#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_MAX_POWER      "show_ap_max_power"

#define WID_DBUS_CONF_METHOD_SHOW_RRM_CONFIG      "show_rrm_config"
#define WID_DBUS_CONF_METHOD_AP_SHOW_WTP_TXPOWER_CONTROL      "show_ap_txpower_control"
#define WID_DBUS_CONF_METHOD_SET_RECEIVER_SIGNAL_LEVEL      "set_receiver_signal_level"
#define WID_DBUS_CONF_METHOD_SHOW_RECEIVER_SIGNAL_LEVEL      "show_receiver_signal_level"

#define WID_DBUS_TRAP_WID_WTP_CHANNEL_DEVICE_INTERFERENCE		"wid_dbus_trap_wtp_channel_device_interference"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_AP_INTERFERENCE		"wid_dbus_trap_wtp_channel_ap_interference"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_TERMINAL_INTERFERENCE		"wid_dbus_trap_channel_terminal_interference"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_COUNT_MINOR		"wid_dbus_trap_channel_count_minor"

#define WID_DBUS_TRAP_WID_WTP_AC_DISCOVERY_DANGER_AP		"wid_dbus_trap_wtp_ac_discovery_danger_ap"
#define WID_DBUS_TRAP_WID_WTP_AC_DISCOVERY_COVER_HOLE		"wid_dbus_trap_wtp_ac_discovery_cover_hole"

#define WID_DBUS_TRAP_WID_AP_CPU_THRESHOLD		"wid_dbus_trap_ap_cpu_threshold"
#define WID_DBUS_TRAP_WID_AP_MEM_THRESHOLD		"wid_dbus_trap_ap_mem_threshold"
#define WID_DBUS_TRAP_WID_AP_TEMP_THRESHOLD		"wid_dbus_trap_ap_temp_threshold"
#define WID_DBUS_TRAP_WID_AP_ROGUE_THRESHOLD		"wid_dbus_trap_ap_rogue_threshold"
#define WID_DBUS_TRAP_WID_AP_WIFI_IF_ERROR		"wid_dbus_trap_ap_wifi_if_error"
#define WID_DBUS_TRAP_WID_AP_ATH_ERROR		"wid_dbus_trap_ap_ath_error"
#define WID_DBUS_TRAP_WID_AP_RRM_STATE_CHANGE		"wid_dbus_trap_ap_rrm_state_change"
#define WID_DBUS_TRAP_WID_AP_RUN_QUIT		"wid_dbus_trap_ap_run_quit"

#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_SAMPLE_THROUGHPUT_INFO		"wid_dbus_show_sample_throughput_info"
#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_WLAN_VLAN_INFO		"wid_dbus_show_wlan_vlan_info"
#define WID_DBUS_CONF_METHOD_SHOW_WID_WTP_ETH_IF_INFO		"wid_dbus_show_eth_if_info"
#define WID_DBUS_CONF_METHOD_SET_WID_WATCH_DOG   "set_wid_watch_dog"	
#define WID_DBUS_CONF_METHOD_SHOW_DBUS_COUNT	"wid_show_dbus_count"
#define WID_DBUS_CONF_METHOD_SET_DBUS_COUNT	"wid_set_dbus_count"

#define WID_DBUS_TRAP_WID_WTP_WIRELESS_INTERFACE_DOWN		"wid_dbus_trap_wtp_wireless_interface_down"
#define WID_DBUS_TRAP_WID_WTP_WIRELESS_INTERFACE_DOWN_CLEAR		"wid_dbus_trap_wtp_wireless_interface_down_clear"

#define WID_DBUS_CONF_METHOD_SHOW_MODEL	"show_model"
#define WID_DBUS_CONF_METHOD_SHOW_MODEL_LIST	"show_model_list"


#define WID_DBUS_TRAP_WID_WTP_AC_DISCOVERY_COVER_HOLE_CLEAR		"wid_dbus_trap_wtp_ac_discovery_cover_hole_clear"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_DEVICE_INTERFERENCE_CLEAR		"wid_dbus_trap_wtp_channel_device_interference_clear"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_AP_INTERFERENCE_CLEAR		"wid_dbus_trap_wtp_channel_ap_interference_clear"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_TERMINAL_INTERFERENCE_CLEAR		"wid_dbus_trap_channel_terminal_interference_clear"
#define WID_DBUS_TRAP_WID_WTP_CHANNEL_COUNT_MINOR_CLEAR		"wid_dbus_trap_channel_count_minor_clear"

#define WID_DBUS_TRAP_WID_WTP_FIND_UNSAFE_ESSID		"wid_dbus_trap_wtp_find_unsafe_essid"
#define WID_DBUS_TRAP_WID_WTP_FIND_WIDS_ATTACK		"wid_dbus_trap_wtp_find_wids_attack"


#define WID_DBUS_CONF_METHOD_SHOW_WIDS_STATISTICS_LIST_BYWTPID          "show_wids_statistics_list_bywtpid"
#define WID_DBUS_CONF_METHOD_SHOW_WIDS_STATISTICS_LIST          "show_wids_statistics_list"
#define WID_DBUS_CONF_METHOD_CLEAR_WIDS_STATISTICS_LIST_BYWTPID          "clear_wids_statistics_list_bywtpid"
#define WID_DBUS_CONF_METHOD_CLEAR_WIDS_STATISTICS_LIST          "clear_wids_statistics_list"

#define WID_DBUS_CONF_METHOD_SHOW_WIDS_DEVICE_LIST_BYWTPID          "show_wids_device_list_bywtpid"
#define WID_DBUS_CONF_METHOD_SHOW_WIDS_DEVICE_LIST          "show_wids_device_list"
#define WID_DBUS_CONF_METHOD_CLEAR_WIDS_DEVICE_LIST_BYWTPID          "clear_wids_device_list_bywtpid"
#define WID_DBUS_CONF_METHOD_CLEAR_WIDS_DEVICE_LIST          "clear_wids_device_list"


#define WID_DBUS_CONF_METHOD_SET_NEIGHBORDEAD_INTERVAL	"set_neighbordead_interval"
#define WID_DBUS_CONF_METHOD_SHOW_NEIGHBORDEAD_INTERVAL	"show_neighbordead_interval"

#define WID_DBUS_CONF_METHOD_WTPLIST_BYWLANID "show_wtp_bywlanid"

#define WID_DBUS_WTP_METHOD_SET_UPDATE_PATH		"wtp_set_update_path"
#define WID_DBUS_CONF_METHOD_SHOW_UPDATE_CONFIG	"show_update_config"
#define WID_DBUS_CONF_METHOD_CLEAR_UPDATE_CONFIG	"clear_update_config"
#define WID_DBUS_CONF_METHOD_TRAP_DEBUG_OPEN          "set_wid_trap_open"
#define WID_DBUS_CONF_METHOD_TRAP_SWITCH_ABLE          "set_wid_trap_switch_able"
#define WID_DBUS_CONF_METHOD_TRAP_SWITCH_SHOW          "set_wid_trap_switch_show"
#define WID_DBUS_WTP_METHOD_GET_UPDATE_WTP_TIMER_STATUS          "get_update_wtp_timer_status"
#define WID_DBUS_WTP_METHOD_GET_UPDATE_WTP_NUM          "get_update_wtp_num"
#define WID_DBUS_WTP_METHOD_UPDATE_START_TFTPD          "update_start_tftpd"
#define WID_DBUS_WTP_METHOD_GET_UPDATE_STOP_TIMER_STATUS          "get_update_stop_timer_status"
#define WID_DBUS_WTP_METHOD_GET_AP_ID_BY_MODEL          "get_update_ap_id_by_model"
#define	WID_DBUS_WTP_METHOD_UPDATE_WTP_IMG	"update_wtp_img"
#define	WID_DBUS_WTP_METHOD_CLEAR_UPDATE_WTP_IMG	"clear_update_wtp_img"
#define	WID_DBUS_WTP_METHOD_UPDATE_WTP_IMG_LIST	"update_wtp_img_list"
#define	WID_DBUS_WTP_METHOD_CLEAR_UPDATE_WTP_IMG_LIST	"clear_update_wtp_img_list"
#define WID_DBUS_WTP_METHOD_GET_UPDATE_CONFIG_BY_MODEL          "get_update_config"


#define WID_DBUS_CONF_METHOD_AP_AUTO_UPDATE_SWITCH "ap_auto_upgrade_switch"
#define WID_DBUS_CONF_METHOD_UPDATE_WTPCOMPATIBLE "update_wtpcompatible"
#define WID_DBUS_CONF_METHOD_SET_AP_UPDATE_FAIL_COUNT	"wid_set_ap_update_fail_count"
#define WID_DBUS_CONF_METHOD_SHOW_AP_UPDATE_FAIL_COUNT	"wid_show_ap_update_fail_count"
#define WID_DBUS_CONF_METHOD_WTPLIST_UPDATE_FAIL_LIST	"show_wtp_list_update_fail"
#define	WID_DBUS_WTP_METHOD_CLEAR_UPDATE_FAIL_WTP_LIST	"clear_update_fail_wtp_list"
#define WID_DBUS_CONF_METHOD_SHOW_OLD_AP_IMG		"show_old_ap_img_op"

/*zhanglei add for bak ac ip list group*/
#define	WID_DBUS_ACIPLIST_OBJPATH		"/aw/wid/aciplist"
#define WID_DBUS_ACIPLIST_INTERFACE		"aw.wid.aciplist"
#define	WID_DBUS_ACIPLIST_METHOD_CONFIG		"config_ac_ip_list"
#define	WID_DBUS_ACIPLIST_METHOD_ADD_AC_IP_LIST_GROUP	"add_ac_ip_list_group"
#define	WID_DBUS_ACIPLIST_METHOD_DEL_AC_IP_LIST_GROUP	"del_ac_ip_list_group"
#define	WID_DBUS_ACIPLIST_METHOD_CONFIG_AC_IP_LIST		"config_ac_ip_list"
#define	WID_DBUS_ACIPLIST_METHOD_ADD_AC_IP				"add_ac_ip"
#define	WID_DBUS_ACIPLIST_METHOD_DEL_AC_IP				"del_ac_ip"
#define	WID_DBUS_ACIPLIST_METHOD_SET_AC_IP_PRIORITY		"set_ac_ip_priority"
#define	WID_DBUS_ACIPLIST_METHOD_AC_IP_LIST_GROUP_SWITCH	"ac_ip_list_group_switch"
#define WID_DBUS_ACIPLIST_METHOD_SHOW_AC_IP_LIST		"show_ac_ip_list"
#define WID_DBUS_ACIPLIST_METHOD_SHOW_AC_IP_LIST_ONE	"show_ac_ip_list_one"
#define WID_DBUS_ACIPLIST_METHOD_SHOW_RUNNING_CONFIG		"show_ac_ip_list_running_config"

#define WID_DBUS_CONF_METHOD_AP_SHOW_NETWORK      "show_ap_network_bywtpid_cmd"
#define WID_DBUS_CONF_METHOD_SET_WID_AP_IP_GATEWAY_DNS "set_ap_network_command_cmd"
#define WID_DBUS_CONF_METHOD_AC_LOAD_BALANCE      "set_ac_num_or_flow_balance"
#define WID_DBUS_CONF_METHOD_AP_HOTREBOOT          "set_ap_hotreboot"
#define WID_DBUS_CONF_AC_LOAD_BALANCE_PARA      "set_ac_balance_para"

#define WID_DBUS_WTP_METHOD_SET_WTP_WIDS_POLICY      "set_wtp_wids_policy"
#define WID_DBUS_CONF_METHOD_ADD_WID_MAC          "add_wids_mac"
#define WID_DBUS_CONF_METHOD_DEL_WID_MAC          "del_wids_mac"
#define WID_DBUS_CONF_METHOD_WIDS_MAC_SHOW          "show_wids_mac_list"
//added by weianying for countermeasures rogue ap  and adhoc device
#define WID_DBUS_CONF_METHOD_AP_COUNTERMEASURES          "set_ap_countermeasures"
#define WID_DBUS_CONF_METHOD_AP_COUNTERMEASURES_MODE          "set_ap_countermeasures_mode"

#define WID_DBUS_RADIO_METHOD_SET_GUARD_INTERVAL	"radio_set_guardinterval"
#define WID_DBUS_RADIO_METHOD_SET_MCS	"radio_set_mcs"
#define WID_DBUS_RADIO_METHOD_SET_CMMODE	"radio_set_cmmode"
#define WID_DBUS_RADIO_SECTOR_SET_CMD	"set_sector_value";
#define WID_DBUS_RADIO_SECTOR_POWER_SET_CMD		"set_sector_power_value";
#define WID_DBUS_RADIO_NETGEAR_G_SET_CMD	"set_radio_netgear_supper_g_type_cmd";
#define WID_DBUS_EBR_METHOD_SET_EBR_ADD_DEL_UPLINK		"ebr_set_ebr_add_del_uplink" 

#define WID_DBUS_CONF_METHOD_SET_MAC_WHITELIST_SWITCH    "set_wid_mac_whitelist"
#define WID_DBUS_CONF_METHOD_SET_ESSID_WHITELIST_SWITCH    "set_wid_essid_whitelist"	
#define WID_DBUS_CONF_METHOD_SET_WTP_LINK_DETECT     "set_wtp_link_detect"

#define WID_DBUS_CONF_METHOD_SET_WSM_SWITCH "set_wsm_switch"

#endif
