
#ifndef __RNIC_INTERFACE_H__
#define __RNIC_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/*================================================*/
/* 数值宏定义 */
/*================================================*/

/*================================================*/
/* 功能函数宏定义 */
/*================================================*/

/*******************************************************************************
  3 枚举定义
*******************************************************************************/

enum RNIC_RMNET_ID_ENUM
{
    RNIC_RMNET_ID_0,                                                            /* 网卡0 */
    RNIC_RMNET_ID_1,                                                            /* 网卡1 */
    RNIC_RMNET_ID_2,                                                            /* 网卡2 */
#if (FEATURE_ON == FEATURE_MULTI_MODEM)
    RNIC_RMNET_ID_3,                                                            /* 网卡3 */
    RNIC_RMNET_ID_4,                                                            /* 网卡4 */
#if (MULTI_MODEM_NUMBER == 3)
    RNIC_RMNET_ID_5,                                                            /* 网卡5 */
    RNIC_RMNET_ID_6,                                                            /* 网卡6 */
#endif
#endif
    RNIC_RMNET_ID_VT,                                                           /* VT绑定的网卡 */
    RNIC_RMNET_ID_BUTT
};
typedef VOS_UINT8 RNIC_RMNET_ID_ENUM_UINT8;

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/

/*****************************************************************************
  6 消息定义
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/

/*****************************************************************************
  10 函数声明
*****************************************************************************/



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* RnicInterface.h */

