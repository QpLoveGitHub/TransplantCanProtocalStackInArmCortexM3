//*****************************************************************************
// file     : SystemTasks.c
//
// Copyright (c) 2011-2020 HSAE co. Ltd. All rights reserved
//
// Change Logs:
// Date             Author      Note
// 2017/11/15       Linzhen     First draft version
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup linux-t
//! @{
//
//*****************************************************************************

/*---------------------------------------------------------------------------*/
/* include files                                                             */
/*---------------------------------------------------------------------------*/
#include "SystemManageDef.h"
#include "SystemManage.h"
//#include "bsp_pwr.h"
//#include "bsp_wdg.h"
/*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * brief
  * SystemState_Idle_Task
  *
  * param None
  *
  * return None
  */
unsigned char SystemState_Idle_Task(void)
{
    unsigned char returnValue = 0x01;

    /* Initialize and configure clocks - see clock manager component for details */
   // CLOCK_SYS_Init(g_clockManConfigsArr, CLOCK_MANAGER_CONFIG_CNT, g_clockManCallbacksArr, CLOCK_MANAGER_CALLBACK_CNT);
   // CLOCK_SYS_UpdateConfiguration(0U, CLOCK_MANAGER_POLICY_AGREEMENT);
	//CLOCK_DRV_Init(&clockMan1_InitConfig0);

    //bsp_initPWR();//初始化失败怎么办?

	//watchdog_feed();//喂狗
    return returnValue;
}

