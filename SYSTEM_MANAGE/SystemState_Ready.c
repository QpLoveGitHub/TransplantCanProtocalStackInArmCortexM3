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
//#include "timer.h"
//#include "bsp_wdg.h"
//#include "app_can0.h"
//#include "can_nm.h"
//#include "can_sig.h"
//#include "app_accdowith.h"
//#include "shell.h"
//#include "bsp_portdinterruptandwakeup.h"
//#include "app_SleepAndWakeup.h"
//#include "app_E2data.h"
//#include "bsp_pwr.h"

//#include "../can0app/ipc_async/can_ipcasync.h"
//#include "../McuLogManage/McuLogManage.h"
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
  * SystemState_Ready_Task
  * \param None
  *
  * \return unsigned char
  */
unsigned char SystemState_Ready_Task(void)//no use
{
    unsigned char ReturnValue = 0;

	//========================1ms Task=========================
	//?¨¤??¡À???????

	//CarSignal_ACCOldState_Initial();//acc¡Á?????????,¡Á?¡À??¨¬??????
	//CarSignal_ACCState_Initial();

	//CarSignal_IgnOldState_Initial();//ign¡Á?????????,¡Á?¡À??¨¬??????
	//CarSignal_IgnState_Initial();

	//App_E2data_Init();
	//s32k144moudleinit();//lptmr??????
						//????????????
	//CanAsync_Init();
	//MCULog_Init();

	//CAN_Init();
	//CAN_DRV_Init();

	//PortdIntInit();
	//INT_SYS_DisableIRQ(PORTD_IRQn);

	//bsp_PWRSwitch(PWR_HSRUN);
	//===================20ms Task=========================
	//shell_printf("__CAN__: can start time %dms\r\n",TimerMS_Get());
	//CAN_Start();//300ms????
	ReturnValue = 0x01;

    return (ReturnValue);
}
