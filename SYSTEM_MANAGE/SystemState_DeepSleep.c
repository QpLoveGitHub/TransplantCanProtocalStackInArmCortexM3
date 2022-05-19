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
//#include "bsp_gpio.h"
//#include "bsp_pwr.h"
//#include "bsp_wdg.h"
//#include "bsp_portdinterruptandwakeup.h"

//#include "app_controlpower.h"
//#include "app_iam20609.h"
//#include "sleep.h"
//#include "app_SleepAndWakeup.h"
//#include "app_accdowith.h"

//#include "can_nm.h"
///*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/
//#define SystemState_StandBy_TimeOut 10

/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * \brief
  * SystemState_DeepSleep_Task
  * \param None
  *
  * \return unsigned char
  */
unsigned char SystemState_DeepSleep_Task(void)
{
	static unsigned int Check50s = 0;
    unsigned char ReturnValue = 0;

    unsigned char DeepSleepAccStatus = 0xff;
    unsigned char DeepSleepIgnStatus = 0xff;
	static unsigned char DeepSleepIgnOnFlag = 0x00;


//    if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms) == System_TimeSlice_ObtainSuccess)
//    {
// 	    watchdog_feed();

//        //1ms Task
//        if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms) == System_TimeSlice_ObtainSuccess)
//        {
//        	//10ms Task
//			//ign
//			DeepSleepIgnStatus = CarSignal_Ign_Check();
//			if(DeepSleepIgnStatus == Ipc020005IgnStateOn)//ign on
//			{
//				DeepSleepIgnOnFlag = 0x01;
//			}
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
//            //100ms Task
//        	//已经通知soc,ipc已经在进入睡眠的时候发出
//        	//进入睡眠前执行ipc发出睡眠指令
//        	if(Check50s==200)
//        	{
//        		AG35_PWRKEY_OUTHIGH;//1000ms
//        	}
//        	else if(Check50s==210)
//        	{
//        		AG35_PWRKEY_OUTLOW;
//        	}
//        	/*Auto test for Deep state. by shunl 2021/12/21.*/
//	      	if(TRUE == GetAutoTestRequest_EnterDeepSleep())
//			{
//				AutoTest_EnterDeepSleepProcess();
//			}
//			
//        	if( Check50s > (320+210) )//32秒关机
//        	{
//          		/*if(0x01==ReadytoSleep())*///准备进入睡眠//将iic中断释放掉/*by shunl 2021.11.23.*/
//          		if(1)
//          		{
//                	Check50s = 0;

//          			LEDred_OUTLOW;//灭灯
//          			LEDgreen_OUTLOW;//灭灯

//					closepower_v3v8();
//					closepower_emmc();

//				    //bsp_PWRSwitch(PWR_RUN);
//						ClrInterruptVar();
//						CloseMoudleForSleep();//只留acc唤醒中断
//						SetIpcUartPortForSleep();
//						SetFlexioIIcPortForSleep();

//						closepower_entersleep();//关闭的时候drt是否需要控制
//												//给Ec25断电,冷启动
//						ec25enterlowpower();//ec25进入低功耗

//					if((DeepSleepIgnOnFlag ==0x00) && CanNm_IsSleepState())
//					{
//						if(1u == IGN_DET)//ign_det off
//						{
//							//判断acc及ign有没有异动
//		                	IgnInt();
//							//AccInt();
//							CanInt();
//							BtWakeupInt();
//							Ec25RiIntDisable();						
//							INT_SYS_EnableIRQ(PORTD_IRQn);							
//							accwakeup_sleep_flag_set();
//							bsp_PWRSwitch(PWR_VLPS);//恢复到wakeup,全部重新初始化了
//							accwakeup_sleep_flag_clear();

//							SAW_SocRebootTimeReset();
//						}
//					    else
//				    	{
//							DeepSleepIgnOnFlag = 0x00;
//				    	}
//					}
//					else
//					{
//						DeepSleepIgnOnFlag = 0x00;
//					}

//					ReturnValue = 1;//回到wakeup流程
//									//2019年2月27日14:57:48
//          		}
//        	}
//        	else
//        	{
//        		Check50s++;
//        	}
//        }
//    }

    return (ReturnValue);
}

