/**********************************************************************************************************************

  *  FILE DESCRIPTION
  *  -------------------------------------------------------------------------------------------------------------------
  *         File:  SysTick_Lcfg.c
  *       Module:  SysTick Timer Driver
  *
  *  Description:  The file contains all the containers of the user configurations
  *  
  *********************************************************************************************************************/


 /**********************************************************************************************************************
  * INCLUDES
  *********************************************************************************************************************/
#include "../../Static/inc/SysTick_Types.h"
#include "../inc/SysTick_CFG.h"

 /**********************************************************************************************************************
  *  GLOBAL DATA PROTOTYPES
  *********************************************************************************************************************/
const SysTick_Config My_SysTick =
{
     SysTick_Interrupt_Enable,
     SysTick_ClkSrc_SysClk,
     SYSTICK_INITIAL_RELOAD_VALUE_IN_ms
};
