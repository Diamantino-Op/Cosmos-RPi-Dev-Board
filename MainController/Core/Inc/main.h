/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h5xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ETH_LED_Y_Pin GPIO_PIN_2
#define ETH_LED_Y_GPIO_Port GPIOB
#define ETH_INT_Pin GPIO_PIN_10
#define ETH_INT_GPIO_Port GPIOB
#define RPi_FAULT_Pin GPIO_PIN_14
#define RPi_FAULT_GPIO_Port GPIOB
#define SDMMC_CD_Pin GPIO_PIN_15
#define SDMMC_CD_GPIO_Port GPIOA
#define RPi_CTRL_Pin GPIO_PIN_4
#define RPi_CTRL_GPIO_Port GPIOB
#define STATUS_LED_Pin GPIO_PIN_6
#define STATUS_LED_GPIO_Port GPIOB
#define EXT_RST_Pin GPIO_PIN_7
#define EXT_RST_GPIO_Port GPIOB
#define EXT_BOOT_Pin GPIO_PIN_8
#define EXT_BOOT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
