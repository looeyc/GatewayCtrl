/*
 * DataCenterClient.h
 *
 *  Created on: 2015-9-16
 *      Author: chengm
 */

#ifndef DATACENTERCLIENT_H_
#define DATACENTERCLIENT_H_

#include "dal_event.h"

//通用的返回值
#define SUCCESS 		0	//成功
#define FAILED			-1	//输入的参数是非法值
#define ILLEGAL_INPUT	-2	//失败，未指明原因

//数据类型定义------------------------------------------------------------------------------------------------
//配置参数
typedef struct{
	//待补充
}stDCC_Config;

//模块状态参数
typedef struct{
	//待补充
}stDCC_Status;

//功能接口定义------------------------------------------------------------------------------------------------
//模块初始化
//pConfig - 初始化模块时指定的配置参数
//return -  SUCCESS、FAILED、ILLEGAL_INPUT
//			其他值含义由开发者补充于此
int DCC_Init(stDCC_Config *pConfig);

//获取模块当前工作状态
//pStatus - 调用者提供空间，用于返回获取到的内容
//return -  SUCCESS、FAILED、ILLEGAL_INPUT
//			其他值含义由开发者补充于此
int DCC_GetStatus(stDCC_Status *pStatus);

//向数据中心上报事件
//pEvent - 需要上报的事件
//return -  SUCCESS、FAILED、ILLEGAL_INPUT
//			其他值含义由开发者补充于此
int DCC_EventReport(stEvent *pEvent);


#endif /* DATACENTERCLIENT_H_ */










