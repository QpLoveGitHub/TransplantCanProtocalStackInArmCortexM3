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
//#include "bsp_Flash.h"
//#include "bsp_portdinterruptandwakeup.h"
//#include "bsp_wdg.h"
//#include "app_can0.h"
//#include "can_nm.h"
//#include "app_SleepAndWakeup.h"
//#include "app_E2data.h"

//#include "shell.h"
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
  * SystemState_WakeUp_Task
  * \param None
  *
  * \return unsigned char
  */
unsigned char SystemState_WakeUp_Task(void)
{
    unsigned char returnValue = 0x00;

    //bsp_PWRSwitch(PWR_RUN);

    //bsp_FLASH_Init();

	//shell_init();
    /* Initialize pins - See PinSettings component for more info */
    //PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
    //NxpS32K144gpioinit();
	//LEDred_OUTHIGH;
	//LEDgreen_OUTHIGH;

    //App_E2data_Init();

    //bsp_PWRSwitch(PWR_HSRUN);

    returnValue = 0x01;
    return (returnValue);
}

