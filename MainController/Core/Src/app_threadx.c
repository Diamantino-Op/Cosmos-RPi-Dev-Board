/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_threadx.c
  * @author  MCD Application Team
  * @brief   ThreadX applicative file
  ******************************************************************************
    * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "app_threadx.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/**
  * @brief  Application ThreadX Initialization.
  * @param memory_ptr: memory pointer
  * @retval int
  */
UINT App_ThreadX_Init(VOID *memory_ptr)
{
  UINT ret = TX_SUCCESS;
  /* USER CODE BEGIN App_ThreadX_Init */
  /* USER CODE END App_ThreadX_Init */

  return ret;
}

  /**
  * @brief  Function that implements the kernel's initialization.
  * @param  None
  * @retval None
  */
void MX_ThreadX_Init(void)
{
  /* USER CODE BEGIN Before_Kernel_Start */

  /* USER CODE END Before_Kernel_Start */

  tx_kernel_enter();

  /* USER CODE BEGIN Kernel_Start_Error */

  /* USER CODE END Kernel_Start_Error */
}

/**
  * @brief  CosmosDev_LowPower_Timer_Setup
  * @param  count : TX timer count
  * @retval None
  */
void CosmosDev_LowPower_Timer_Setup(ULONG count)
{
  /* USER CODE BEGIN  CosmosDev_LowPower_Timer_Setup */

  /* USER CODE END  CosmosDev_LowPower_Timer_Setup */
}

/**
  * @brief  CosmosDev_LowPower_Enter
  * @param  None
  * @retval None
  */
void CosmosDev_LowPower_Enter(void)
{
  /* USER CODE BEGIN  CosmosDev_LowPower_Enter */

  /* USER CODE END  CosmosDev_LowPower_Enter */
}

/**
  * @brief  CosmosDev_LowPower_Exit
  * @param  None
  * @retval None
  */
void CosmosDev_LowPower_Exit(void)
{
  /* USER CODE BEGIN  CosmosDev_LowPower_Exit */

  /* USER CODE END  CosmosDev_LowPower_Exit */
}

/**
  * @brief  CosmosDev_LowPower_Timer_Adjust
  * @param  None
  * @retval Amount of time (in ticks)
  */
ULONG CosmosDev_LowPower_Timer_Adjust(void)
{
  /* USER CODE BEGIN  CosmosDev_LowPower_Timer_Adjust */
  return 0;
  /* USER CODE END  CosmosDev_LowPower_Timer_Adjust */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
