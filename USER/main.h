#ifndef __MAIN_H
#define __MAIN_H

extern unsigned int SystemTimer;        //变量声明
extern unsigned int TEHUTimer;        //变量声明

#define  PRODUCTKEY           "a1JNrJ64CzS"                                        //产品ID
#define  DEVICENAME           "HomeSecurity"                                               //设备名  
#define  DEVICESECRE          "4941f90a1f5e37197f24dd4d0af7cdcf"                   //设备秘钥   
#define  S_TOPIC_NAME         "/sys/a1JNrJ64CzS/HomeSecurity/thing/service/property/set"   //需要订阅的主题  
#define  P_TOPIC_NAME         "/sys/a1JNrJ64CzS/HomeSecurity/thing/event/property/post"    //需要发布的主题  

//#define SSID   "CMCC-42DF"              //路由器SSID名称   2.4G   
//#define PASS   "96eas8eu"                 //路由器密码  ****WIFI6****
#define SSID   "honor"              //路由器SSID名称   2.4G   
#define PASS   "h477477h"                 //路由器密码  ****WIFI6****



#endif









