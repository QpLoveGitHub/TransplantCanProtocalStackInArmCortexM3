//*****************************************************************************
// file     : public_def.h
// It's a public typedef file
//
// Copyright (c) 2006-2020 HSAE co. Ltd. All rights reserved
//
// Change Logs:
// Date             Author        Note
// 2017/06/20       kuan          filenote
//*****************************************************************************

#ifndef _PUBLIC_DEF_H_
#define _PUBLIC_DEF_H_

//*****************************************************************************
//
//! \addtogroup schTypedef
//! @{
//
//*****************************************************************************


//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif


#if (USE_SYS_08BIT_MCU==USE_SYS_XXBIT_MCU||USE_SYS_16BIT_MCU==USE_SYS_XXBIT_MCU)
typedef unsigned char uint8_T;
typedef unsigned short uint16_T;
typedef unsigned long uint32_T;

typedef signed char int8_T;
typedef signed short int16_T;
typedef signed long int32_T;
#elif (USE_SYS_32BIT_MCU==USE_SYS_XXBIT_MCU||USE_SYS_64BIT_MCU==USE_SYS_XXBIT_MCU)
typedef unsigned char uint8_T;
typedef unsigned short uint16_T;
typedef unsigned int uint32_T;

typedef signed char int8_T;
typedef signed short int16_T;
typedef signed int int32_T;
#else
#error "USE_SYS_XXBIT_MCU no define or not in range"
#endif


#ifdef __cplusplus
#define    __I    volatile             /*!< Defines 'read only' permissions                 */
#else
#define    __I    volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define    __O    volatile             /*!< Defines 'write only' permissions                */
#define   __IO    volatile             /*!< Defines 'read / write' permissions              */

/*!< STM32F10x Standard Peripheral Library old types (maintained for legacy purpose) */

typedef int32_T  s32;
typedef int16_T s16;
typedef int8_T  s8;

typedef const int32_T sc32;  /*!< Read Only */
typedef const int16_T sc16;  /*!< Read Only */
typedef const int8_T sc8;   /*!< Read Only */

typedef __IO int32_T  vs32;
typedef __IO int16_T  vs16;
typedef __IO int8_T   vs8;

typedef __I int32_T vsc32;  /*!< Read Only */
typedef __I int16_T vsc16;  /*!< Read Only */
typedef __I int8_T vsc8;   /*!< Read Only */

typedef uint32_T  u32;
typedef uint16_T u16;
typedef uint8_T  u8;

typedef const uint32_T uc32;  /*!< Read Only */
typedef const uint16_T uc16;  /*!< Read Only */
typedef const uint8_T uc8;   /*!< Read Only */

typedef __IO uint32_T  vu32;
typedef __IO uint16_T vu16;
typedef __IO uint8_T  vu8;

typedef __I uint32_T vuc32;  /*!< Read Only */
typedef __I uint16_T vuc16;  /*!< Read Only */
typedef __I uint8_T vuc8;   /*!< Read Only */

typedef enum { RESET = 0, SET = !RESET } FlagStatus, ITStatus;
#define IS_STATUS_STATE(STATE) (((STATE) == RESET) || ((STATE) == SET))

typedef enum { DISABLE = 0, ENABLE = !DISABLE } FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum { ERROR = 0, SUCCESS = !ERROR } ErrorStatus;
#define IS_ERROR_STATE(STATE) (((STATE) == ERROR) || ((STATE) == SUCCESS))


//typedef u32 size_t;

typedef u8   byte;
typedef u16  word;
typedef u32 dword;

#ifndef FALSE
#define FALSE               0
#define false               0
#endif
#ifndef TRUE
#define TRUE                1
#define true                1
#endif


#ifndef bool
typedef u8   bool;
#endif

#ifndef NULL
#define NULL ((void *)0)
#endif

typedef void(*VoidFun)(void);
typedef ErrorStatus(*ErrorStatusFun)(void);

typedef struct Bit_Char
{
    u8 B0 : 1;
    u8 B1 : 1;
    u8 B2 : 1;
    u8 B3 : 1;
    u8 B4 : 1;
    u8 B5 : 1;
    u8 B6 : 1;
    u8 B7 : 1;
} BitChar;

typedef struct Bit_Int
{
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 b6 : 1;
    u16 b7 : 1;
    u16 b8 : 1;
    u16 b9 : 1;
    u16 b10 : 1;
    u16 b11 : 1;
    u16 b12 : 1;
    u16 b13 : 1;
    u16 b14 : 1;
    u16 b15 : 1;
} BitInt;

typedef union word_Union
{
    u16        data_Int;
    BitInt  data_Intbit;
} word_field;

typedef union  byte_format
{
    u8      data_byte;
    BitChar data_Bbit;
} byte_field;

typedef union io_word
{
    u16    io_w;
    u8   io_b[2];
} word_io;

typedef struct
{
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 b5 : 1;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 b12 : 1;
    u32 b13 : 1;
    u32 b14 : 1;
    u32 b15 : 1;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 b20 : 1;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 b23 : 1;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 b30 : 1;
    u32 b31 : 1;
} Bit32;

typedef union
{
    u8 ByteData[2];
    u16 Data;
} u16Tou8;

typedef union
{
    s8 ByteData[2];
    s16 Data;
} s16Tos8;

typedef union
{
    s8 ByteData[4];
    s32 Data;
} s32Tos8;

typedef union
{
    u8 ByteData[4];
    u32 Data;
} u32Tou8;

#define bit0        (1<<0)
#define bit1        (1<<1)
#define bit2        (1<<2)
#define bit3        (1<<3)
#define bit4        (1<<4)
#define bit5        (1<<5)
#define bit6        (1<<6)
#define bit7        (1<<7)
#define bit8        (1<<8)
#define bit9        (1<<9)
#define bit10       (1<<10)
#define bit11       (1<<11)
#define bit12       (1<<12)
#define bit13       (1<<13)
#define bit14       (1<<14)
#define bit15       (1<<15)
#define bit16       (1<<16)
#define bit17       (1<<17)
#define bit18       (1<<18)
#define bit19       (1<<19)
#define bit20       (1<<20)
#define bit21       (1<<21)
#define bit22       (1<<22)
#define bit23       (1<<23)
#define bit24       (1<<24)
#define bit25       (1<<25)
#define bit26       (1<<26)
#define bit27       (1<<27)
#define bit28       (1<<28)
#define bit29       (1<<29)
#define bit30       (1<<30)
#define bit31       (1<<31)

#define Bit0        (0)
#define Bit1        (1)
#define Bit2        (2)
#define Bit3        (3)
#define Bit4        (4)
#define Bit5        (5)
#define Bit6        (6)
#define Bit7        (7)
#define Bit8        (8)
#define Bit9        (9)
#define Bit10       (10)
#define Bit11       (11)
#define Bit12       (12)
#define Bit13       (13)
#define Bit14       (14)
#define Bit15       (15)
#define Bit16       (16)
#define Bit17       (17)
#define Bit18       (18)
#define Bit19       (19)
#define Bit20       (20)
#define Bit21       (21)
#define Bit22       (22)
#define Bit23       (23)
#define Bit24       (24)
#define Bit25       (25)
#define Bit26       (26)
#define Bit27       (27)
#define Bit28       (28)
#define Bit29       (29)
#define Bit30       (30)
#define Bit31       (31)

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************
#endif

