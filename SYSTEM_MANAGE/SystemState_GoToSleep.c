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
//#include "bsp_wdg.h"
//#include "app_controlpower.h"
//#include "app_e2data.h"
////#include "app_batterycharging.h"
//#include "app_can0.h"
//#include "can_nm.h"
//#include "can_sig.h"
//#include "app_iam20609.h"
//#include "sleep.h"
//#include "app_version.h"
//#include "app_BatteryCheck.h"
//#include "app_accdowith.h"
//#include "app_SleepAndWakeup.h"
//#include "app_gotoboot.h"
//#include "ipc.h"

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
  * \brief
  * SystemState_GoToSleep_Task
  * \param void
  *
  * \return void
  */
unsigned char SystemState_GoToSleep_Task(void)
{
    unsigned char returnValue = 0x00;

	//?¡À??¡À?????,???¨¬??acc

    if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms) == System_TimeSlice_ObtainSuccess)
    {
	    //watchdog_feed();
	    //ipc_dl_thread();//25us(no work)

        //1ms Task
        if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms) == System_TimeSlice_ObtainSuccess)
        {
    	   //ipc_tp_thread();
		   //50ms Task
//		   if(PortDinterrupt.lptmr0WakeupTimes >= Const_EnterDeepSleepTimes)
//		   {

//		   	   PortDinterrupt.lptmr0WakeupTimes = 0x00;
//			   returnValue = SystemState_DeepSleep;
//		   }
//		   else
//		   {
//			   returnValue = SystemState_Sleep;
//		   }
        }

        //if (SystemState_TimeSlice_Obtain(System_TimeSlice_20ms) == System_TimeSlice_ObtainSuccess)
        //{
        //}

        //if (SystemState_TimeSlice_Obtain(System_TimeSlice_50ms) == System_TimeSlice_ObtainSuccess)
        //{
        //}

    }

    return (returnValue);
}

