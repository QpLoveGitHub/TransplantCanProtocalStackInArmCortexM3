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
#include "public_def.h"
//#include "bsp_gpio.h"
//#include "bsp_pwr.h"
//#include "bsp_lptmr0.h"
//#include "bsp_portdinterruptandwakeup.h"
//#include "bsp_wdg.h"
//#include "app_iam20609.h"
//#include "sleep.h"
//#include "app_SleepAndWakeup.h"
//#include "app_accdowith.h"
//#include "app_e2data.h"

//#include "can_nm.h"
//#include "bt_main.h"
/*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/
//连续工作48小时重启soc。
#define	SOC_REBOOT_TIME	(2*24*3600)
//#define	SOC_REBOOT_TIME	(3*60)
/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * \brief
  * SystemState_Sleep_Task
  * \param None
  *
  * \return unsigned char
  */
u32 g_test_time = 0;
unsigned char SystemState_Sleep_Task(void)
{
    unsigned char returnValue = 0x00;

//	static unsigned char SleepIgnOnFlag = 0x00;

//    if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms) == System_TimeSlice_ObtainSuccess)
//    {
//        //1ms Task
//    	//watchdog_feed();//????

//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms) == System_TimeSlice_ObtainSuccess)
//        {
//			//ign
////			if(CarSignal_Ign_Check() == Ipc020005IgnStateOn)//ign on
////			{
////				SleepIgnOnFlag = 0x01;
////			}
//        }

//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_20ms) == System_TimeSlice_ObtainSuccess)
//        {
//        	//20ms Task
//        }

//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_50ms) == System_TimeSlice_ObtainSuccess)
//        {
//            //50ms Task
//        }

//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_100ms) == System_TimeSlice_ObtainSuccess)
//        {
//			//100ms Task
//        }

//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_500ms) == System_TimeSlice_ObtainSuccess)
//        {
//            //500ms Task
//	        /* Gensensor funciton reserved,modified by shunl 2021/12/9.*/
//            if(1u)/*if(0x01==ReadytoSleep())*/
//      		{
//				returnValue = SystemState_Open;
////				LEDred_OUTLOW;//????
////				LEDgreen_OUTLOW;//????
////				BT_SleepProcess();
////				bsp_PWRSwitch(PWR_RUN);
////				ClrInterruptVar();
////				CloseMoudleForSleep();
////				SetIpcUartPortForSleep();
////				SetFlexioIIcPortForSleep();

////				closepower_entersleep();
////				ec25enterlowpower();//ec25??????????

//				//PortDinterrupt.lptmr0WakeupTimes++;
//				if((SleepIgnOnFlag ==0x00) && CanNm_IsSleepState())
//				{
//					if(1u == IGN_DET)//ign_det off
//					{
//						Lptmr0VlpsInit();
//						IgnInt();
//						//AccInt();
//						Ec25RiInt();
//						CanInt();
//						BtWakeupInt();
//						//iam20609Int();
//						INT_SYS_EnableIRQ(PORTD_IRQn);
//						accwakeup_sleep_flag_set();
//						bsp_PWRSwitch(PWR_VLPS);
//						

//						//INT_SYS_DisableIRQ(PORTD_IRQn);

//						PortdIntDisable();
//						accwakeup_sleep_flag_clear();

//						if(SAW_SocRebootTimeGet() >= SOC_REBOOT_TIME &&\
//							(1 == PortDinterrupt.IgnIntFlag ||\
//							1 == PortDinterrupt.AccIntFlag ||\
//							1 == PortDinterrupt.CanIntFlag ||\
//							1 == PortDinterrupt.BtIntFlag))
//						{
//							SAW_SocRebootTimeReset();
//							App_E2data_SetRefresh(TRUE);
//							returnValue = SystemState_WakeUp;
//						}
//						else
//						{
//							returnValue = SystemState_Open;
//						}
//						
//		                lptmr0WakeupTimesIfAddOne();
//					}
//					else
//					{
//						SleepIgnOnFlag = 0x00;
//						CarSignal_IgnOldState_Initial();//ign状态初始化,准备检测电压,并让ipc上报ign					
//					}
//				}
//				else
//				{
//					SleepIgnOnFlag = 0x00;
//					CarSignal_IgnOldState_Initial();//ign状态初始化,准备检测电压,并让ipc上报ign
//				}

//				bsp_PWRSwitch(PWR_RUN);
//				//////////////////////////////////////////////
//				//SetIpcUartPortForRun();
//				//SetFlexioIIcPortForRun();
//				//WakeupFromSleep();
//            	//iam20609_exitlowpower();
//				//////////////////////////////////////////////				
//            	//return SystemState_Normal;
//			    return returnValue;//回到打开模式
//           }
//        }
//    }

    return (returnValue);//??????????
}

