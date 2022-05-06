/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

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
#define Potentionmeter_Pin GPIO_PIN_1
#define Potentionmeter_GPIO_Port GPIOC
#define LCD_NCS_Pin GPIO_PIN_4
#define LCD_NCS_GPIO_Port GPIOF
#define PWM_2_Pin GPIO_PIN_8
#define PWM_2_GPIO_Port GPIOA
#define PWM_1_Pin GPIO_PIN_9
#define PWM_1_GPIO_Port GPIOA
#define Green_PWM1_LED_Pin GPIO_PIN_10
#define Green_PWM1_LED_GPIO_Port GPIOC
#define Blue_PWM1_LED_Pin GPIO_PIN_2
#define Blue_PWM1_LED_GPIO_Port GPIOD
#define STLM75_ALERT_Pin GPIO_PIN_5
#define STLM75_ALERT_GPIO_Port GPIOB
#define STLM75_SCL_Pin GPIO_PIN_6
#define STLM75_SCL_GPIO_Port GPIOB
#define STLM75_SDA_Pin GPIO_PIN_7
#define STLM75_SDA_GPIO_Port GPIOB
#define Button_Pin GPIO_PIN_8
#define Button_GPIO_Port GPIOB
#define Button_EXTI_IRQn EXTI4_15_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
