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
//#include "app_controlpower.h"
//#include "app_can0.h"
//#include "can_nm.h"
//#include "can_sig.h"
//#include "app_iam20609.h"
//#include "app_BatteryCheck.h"
//#include "app_accdowith.h"
//#include "shell.h"
//#include "ipc.h"
//#include "SocSM.h"
//#include "app_E2data.h"
//#include "app_version.h"
//#include "app_SleepAndWakeup.h"
//#include "bt_main.h"
//#include "../can0app/ipc_async/can_ipcasync.h"
//#include "../McuLogManage/McuLogManage.h"
#include "public_def.h"

/*---------------------------------------------------------------------------*/
/* define Macro                                                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* define Variables                                                          */
/*---------------------------------------------------------------------------*/
u32 SystemOpen_State = 0;

/*---------------------------------------------------------------------------*/
/* define APIs                                                               */
/*---------------------------------------------------------------------------*/
/**
  * brief
  * SystemState_OpenTask_Pre
  * param None
  *
  * return None
  */
void SystemState_OpenTask_Pre(void)
{
    SystemOpen_State = 0;
}

/**
  * brief
  * System_OpenTask_Per20ms
  * param None
  *
  * return None
  */
unsigned char System_OpenTask_Per20ms(void)
{
    //u8 OpenSuccess = 0;

    switch (SystemOpen_State)
    {
		case 0:
			// AG35_DTR_WORK;
			 //AG35_TOSOC_DTR_WORK;
			// openpower_bus5v();
			// openpower_emmc();
			 break;

		case 1:
			 //openpower_v3v8();//come from bus5v
			 //openpower_vdd5v();//come from bus5v
			 //openpower_vdd3v3();
			 break;

		case 4:
			 //AG35_RST_OUTLOW;//>30ms
			// AG35_PWRKEY_OUTLOW;
			 break;

		case 7:
			 //AG35_PWRKEY_OUTHIGH;
			 //AG35_RST_OUTLOW;
			 break;

		case 10:
			 //肯定跑满5次了
	   		 //ReadHardwareAdVoltage = GetHardwareVersion();
			 //hardware_information[23] = (ReadHardwareAdVoltage+0x30);//ascii
			 //g_E2default_HardwareVersion[2] = ReadHardwareAdVoltage;//hex
			// Appver_UpdateHwVersion();
			 //App_E2data_Write(E2data_Index_HardwareVersion,Appver_GetHwVersion(),0);
			 break;
		case 42:
			// AG35_PWRKEY_OUTLOW;
			 break;

		case 62:
			// openpower_codec();
			// openpower_gpsant5v();
			 break;

		case 64:
			 break;

		case 70:
			#if 0/*Gsensor TBD,by shunl 2021.11.23.*/
			 if (iam20609_init() == 1)
			 {

			 }
			 else
			 {
				 SystemOpen_State = 69;
			 }
			 #endif
			 break;

		case 80:
			 //CAN_Start();
			 break;

		case 100:
			 //openpower_usb();
        break;

		case 101:
			/* Set Soc start up state to 0,modified by shunl 2021/12/9.*/
			//SetSocStartUpStatus(0u);
			//OpenSuccess = 1;
        break;

		default:
			 break;
    }

//    SystemOpen_State++;
//    if(SystemOpen_State>=65535)
//    {
//    	SystemOpen_State=65535;
//    }

//    if(OpenSuccess==1)
//    {
//    	 SystemOpen_State = 0;//清不清无所谓
//    }

   // return (OpenSuccess);
		 return (1);
}

/**
  * brief
  * SystemState_Open_Task
  *
  * param None
  *
  * return unsigned char
  */
unsigned char SystemState_Open_Task(void)
{
    unsigned char ReturnValue = 0;

    if (SystemState_TimeSlice_Obtain(System_TimeSlice_1ms) == System_TimeSlice_ObtainSuccess)
    {
    	//watchdog_feed();//喂狗
        //ipc_dl_thread();//25us(no work)
        //1ms Task
        if (SystemState_TimeSlice_Obtain(System_TimeSlice_10ms) == System_TimeSlice_ObtainSuccess)
        {
            //shell_thread(0);
			//CanAsync_Manage();
            //ipc_tp_thread();
		    //SocSM_MainFunction();

			//CarSignal_ACC_Check();
        	//CarSignal_Ign_Check();
			//App_BatteryManage();
			//BT_MainFunction();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_20ms) == System_TimeSlice_ObtainSuccess)
        {
            ReturnValue = System_OpenTask_Per20ms();
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_50ms) == System_TimeSlice_ObtainSuccess)
        {
            //50ms Task
        }

        if (SystemState_TimeSlice_Obtain(System_TimeSlice_100ms) == System_TimeSlice_ObtainSuccess)
        {
        	//McuLocalLog_UpdatetoSoc();
            //100ms Task
            //LEDred_TOOGLE;
			//LEDgreen_OUTLOW;/*by shunl 2021.10.08.*/
        }
    }

	//shell_port_tx_update();
    return (ReturnValue);
}



//从正常睡眠中唤醒
unsigned char SystemState_Open_TaskFromSleep(void)
{
    unsigned char ReturnValue = 0;

	//SetIpcUartPortForRun();
	//SetFlexioIIcPortForRun();
	//WakeupFromSleep();
	/*iam20609_exitlowpower();*//*by shunl 2021.11.23.*/
	//LEDgreen_OUTHIGH;
	/* 10 minitues alarm mode restart,add by shunl 2021/12/10.*/
	//AlarmModeStartFlag = TRUE;

	ReturnValue = 0x01;

    return (ReturnValue);
}

