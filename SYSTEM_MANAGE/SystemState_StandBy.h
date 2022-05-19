//*****************************************************************************
// file    : SystemState_StandBy.h
// handle system standyby task events
//
// Copyright (c) 2011-2020  co. Ltd. All rights reserved
//
// Change Logs:
// Date               Author              Note
// 2018/10/27         LinZhen          First draft version
//
//*****************************************************************************
#ifndef _SystemState_StandBy_H_
#define _SystemState_StandBy_H_


//#define StandByReturnSucess 0x01
#define StandByReturnError1 0x02
#define StandByReturnError2 0x03
//*****************************************************************************
//
//! \addtogroup systemmanage
//! @{
//
//*****************************************************************************
extern unsigned char SystemState_StandBy_Task(void);

#endif




