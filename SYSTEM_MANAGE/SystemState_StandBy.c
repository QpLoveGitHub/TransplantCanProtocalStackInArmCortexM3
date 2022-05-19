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
//#include "bsp_gpio.h"
#include "SystemState_StandBy.h"
//#include "app_SleepAndWakeup.h"
//#include "app_accdowith.h"
//#include "ipc_cfg.h"
//#include "ipc.h"
#include "public_def.h"

/*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/
u16 SystemState_StandByTimeOut_Cnt = 0;

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * brief
  * SystemState_StandBy_Task
  * param None
  *
  * return None
  */
unsigned char SystemState_StandBy_Task(void)//acc ign????????
{
    unsigned char returnValue = 0x00;

//	static unsigned char StandByGoToDeepSleepWaitCounter = 0x00;

//	static unsigned char StandByIgnOnFlag = 0x00;

//    if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms) == System_TimeSlice_ObtainSuccess)
//    {
//	   watchdog_feed();
//	   ipc_dl_thread();//25us(no work)

//       //1ms Task
//       if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms) == System_TimeSlice_ObtainSuccess)
//       {
//    	    ipc_tp_thread();
//			//ign
//			if(CarSignal_Ign_Check() == Ipc020005IgnStateOn)//ign on
//			{
//				StandByIgnOnFlag = 0x01;
//			}
//       }

//       if (SystemState_TimeSlice_Obtain(System_TimeSlice_20ms) == System_TimeSlice_ObtainSuccess)
//       {
//       
//       }

//       if (SystemState_TimeSlice_Obtain(System_TimeSlice_50ms) == System_TimeSlice_ObtainSuccess)
//       {
//            //50ms Task
//		    if(StandByIgnOnFlag ==0x00)
//		    {
//				/* System state will not switch if SOC not start up compeletely,modified by shunl 2021/12/9.*/
//		    	if(1u == GetSocStartUpStatus())
//		    	{
//		   	    	if(1u == IGN_DET)
//			   	   	{
//			 		    if(PortDinterrupt.lptmr0WakeupTimes >= Const_EnterDeepSleepTimes)//???????
//					    {
//					       if(StandByGoToDeepSleepWaitCounter == 0)
//						   {
//							   ipc_send_s(E_REQUEST_01_00, NULL);//?os?????
//							   									 //????????,??????
//							   									 //????
//							   									 //?????,???????2019?2?27?14:13:51
//						   }

//						   StandByGoToDeepSleepWaitCounter++;
//						   if(StandByGoToDeepSleepWaitCounter >= 20)//?1??//ipc????
//						   {
//							   StandByGoToDeepSleepWaitCounter = 0;
//		   		 		       returnValue = SystemState_GoToSleep;//?????sleep
//						   }
//					    }
//						else
//						{
//	   		 		       returnValue = SystemState_GoToSleep;//?????sleep
//						}
//			   	    }
//					else
//					{
//						StandByIgnOnFlag = 0x00;
//						StandByGoToDeepSleepWaitCounter = 0x00;
//						CarSignal_IgnOldState_Initial();//ign?????,??????,??normal??,?????ign on??ign off
//					    returnValue = StandByReturnError2;//??????
//					    								  //?normal?????acc on ??off
//	 				    								  //?normal?????ign on ??off
//					}
//				}
//		    }
//		    else
//		   	{ 
//				StandByIgnOnFlag = 0x00;
//				StandByGoToDeepSleepWaitCounter = 0x00;
//				CarSignal_IgnOldState_Initial();//ign?????,??????
//				returnValue = StandByReturnError1;
//		   	}
//       }

//       //if (SystemState_TimeSlice_Obtain(System_TimeSlice_500ms) == System_TimeSlice_ObtainSuccess)
//       //{
//       //}
//    }

    return (returnValue);
}

