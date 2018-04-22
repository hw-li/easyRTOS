/******************************************************************************
*        
*     Open source
*        
*******************************************************************************
*  file name:          hal_rcc.h
*  author:              Chen Hao
*  version:             1.00
*  file description:   clock init
*******************************************************************************
*  revision history:    date               version                  author
*
*  change summary:   2018-4-18      1.00                    Chen Hao
*
******************************************************************************/
#ifndef __HAL_RCC_H__
#define __HAL_RCC_H__
/******************************************************************************
* Include Files
******************************************************************************/
#include "basetype.h"
#include "board_config.h"

/******************************************************************************
* Macros
******************************************************************************/

/******************************************************************************
* Types
******************************************************************************/

/******************************************************************************
* Extern variable
******************************************************************************/
extern void hal_rcc_enable(uint32 rcc);

#endif /*__HAL_RCC_H__*/

