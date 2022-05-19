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
//#include "bsp_ag35spi.h"
//#include "bsp_gpio.h"
//#include "bsp_wdg.h"
//#include "app_can0.h"
//#include "can_nm.h"
//#include "can_sig.h"
//#include "app_iam20609.h"
//#include "sleep.h"
//#include "app_BatteryCheck.h"
//#include "app_accdowith.h"
//#include "shell.h"
//#include "ipc.h"
//#include "SocSM.h"
//#include "app_E2data.h"

//#include "../can0app/ipc_async/can_ipcasync.h"
//#include "../McuLogManage/McuLogManage.h"
//#include "bt_main.h"
//#include "app_SleepAndWakeup.h"
#include "public_def.h"
/*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/
u8 CounterPer1ms = 0;

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * \brief
  * ClearReadIam20609Counter
  * \param None
  *
  * \return unsigned char
  */
void ClearReadIam20609Counter(void)
{
	CounterPer1ms = 0;
}


/**
  * \brief
  * ReadIam20609Per1msblock
  * \param None
  *
  * \return unsigned char
  */
void ReadIam20609Per1msblock(void)
{
		CounterPer1ms++;
		if(CounterPer1ms == 1)
		{

		}
		else if(CounterPer1ms == 2)
		{

		}
		else if(CounterPer1ms == 3)
		{
        	//ReadIam20609accel();//step1
		}
		else if(CounterPer1ms == 4)
		{
        	//ReadIam20609gyro();//step2
		}
		else if(CounterPer1ms == 5)
		{
        	//Iam20609PreToSpi();//step3
		}
		else if(CounterPer1ms == 6)
		{
		}
		else if(CounterPer1ms == 7)
		{
		}
		else if(CounterPer1ms == 8)
		{
		}
		else if(CounterPer1ms == 9)
		{

		}
		else if(CounterPer1ms >= 10)
		{
			CounterPer1ms = 0;
		}
}


/**
  * \brief
  * System_Nomal_Task
  * \param None
  *
  * \return unsigned char
  */
unsigned char System_Nomal_Task(void)
{
    static u8 DelayEnterSleepCounter = 0;
    //int8_T AccStateToSoc = 0;
	unsigned char TaskExecuate_Normal = 0;

	if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms)
            == System_TimeSlice_ObtainSuccess)
    {
		//LEDgreen_OUTHIGH;
		//watchdog_feed();
		//ipc_dl_thread();//25us(no work)

		/*ReadIam20609Per1msblock();*//*Gsensor TBD,by shunl.2021.11.23.*/

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms)//10ms
                == System_TimeSlice_ObtainSuccess)
        {
			//App_BatteryManage();

			//CarSignal_ACC_CheckAndReport();
			//CarSignal_Ign_CheckAndReport();

			//shell_thread(0);
			//if(!Get_BT_SocToMcuToBleUpgrade_Status())
			//{
			//    CanAsync_Manage();
			//}
			//ipc_tp_thread();
			//SocSM_MainFunction();
			//App_E2data_Manage();
			//BT_MainFunction();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_20ms)//20ms
                == System_TimeSlice_ObtainSuccess)
        {
        	//CanSig_UpdateProc();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_50ms)
                == System_TimeSlice_ObtainSuccess)
        {
			//LEDred_TOOGLE;
        	//iam20609datasendtoec25();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_100ms)
                == System_TimeSlice_ObtainSuccess)
        {
        	//McuLocalLog_UpdatetoSoc();
//    		if((CanNm_IsSleepState())&&(0 == CarSignal_IgnState_Inquire())&&(TRUE == GetAutoTestRequest_EnterDeepSleep()))
//			{
//				//TaskExecuate_Normal = 2;/*Enter deepsleep immediately.by shunl 2021/12/21.*/
//    			//return TaskExecuate_Normal;
//			}		
        	//if(0x01==EnterSleepConditionCheck())
        	if(1)
        	{
        		if( DelayEnterSleepCounter > 20 )
        		{
        			//DelayEnterSleepCounter = 0;
        			//ClearReadIam20609Counter();
        			//TaskExecuate_Normal = 1;
        			//return TaskExecuate_Normal;
        		}
        		else
        		{
            		//DelayEnterSleepCounter++;
        		}
        	}
        	else
        	{
        		//DelayEnterSleepCounter = 0;
        	}
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_200ms)
                == System_TimeSlice_ObtainSuccess)
        {

        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_500ms)
                == System_TimeSlice_ObtainSuccess)
        {

        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_1s)
                == System_TimeSlice_ObtainSuccess)
        {
			//SystemApp_AlarmHandle();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_2s)
                == System_TimeSlice_ObtainSuccess)
        {

        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_5s)
                == System_TimeSlice_ObtainSuccess)
        {

        }
    }
	//shell_port_tx_update();
    return TaskExecuate_Normal;
}

