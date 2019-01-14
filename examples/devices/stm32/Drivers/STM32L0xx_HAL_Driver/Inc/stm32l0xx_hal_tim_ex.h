/**
  ******************************************************************************
  * @file    stm32l0xx_hal_tim_ex.h
  * @author  MCD Application Team
  * @brief   Header file of TIM HAL Extended module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L0xx_HAL_TIM_EX_H
#define __STM32L0xx_HAL_TIM_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal_def.h"

/** @addtogroup STM32L0xx_HAL_Driver
  * @{
  */

/** @addtogroup TIMEx
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup TIMEx_Exported_Types TIM Extended Exported Types
  * @{
  */

/**
  * @}
  */
/* End of exported types -----------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
/** @defgroup TIMEx_Exported_Constants TIM Extended Exported Constants
  * @{
  */

/** @defgroup TIMEx_Remap TIM  Extended Remapping
  * @{
  */
#define TIM2_ETR_GPIO                     0x00000000U                               /*!< TIM2 ETR input is connected to ORed GPIOs */
#if defined(RCC_HSI48_SUPPORT)
#define TIM2_ETR_HSI48                    TIM2_OR_ETR_RMP_2                         /*!< TIM2 ETR input is connected to HSI48 clock */
#endif /* RCC_HSI48_SUPPORT */
#define TIM2_ETR_HSI16                    (TIM2_OR_ETR_RMP_1 | TIM2_OR_ETR_RMP_0)   /*!< TIM2 ETR input is connected to HSI16 clock */
#define TIM2_ETR_LSE                      (TIM2_OR_ETR_RMP_2 | TIM2_OR_ETR_RMP_0)   /*!< TIM2 ETR input is connected to LSE clock */
#if defined(COMP1) && defined(COMP2)
#define TIM2_ETR_COMP2_OUT                (TIM2_OR_ETR_RMP_2 | TIM2_OR_ETR_RMP_1)   /*!< TIM2 ETR input is connected to COMP2_OUT */
#define TIM2_ETR_COMP1_OUT                TIM2_OR_ETR_RMP                           /*!< TIM2 ETR input is connected to COMP1_OUT */
#endif /* COMP1 && COMP2 */
   
#define TIM2_TI4_GPIO                     0x00000000U                               /*!< TIM2 TI4 input connected to ORed GPIOs */
#if defined(COMP1) && defined(COMP2)
#define TIM2_TI4_COMP2                    TIM2_OR_TI4_RMP_0                         /*!< TIM2 TI4 input connected to COMP2_OUT */
#define TIM2_TI4_COMP1                    TIM2_OR_TI4_RMP_1                         /*!< TIM2 TI4 input connected to COMP1_OUT */
#endif /* COMP1 && COMP2 */

#if defined(TIM3)
#if defined(USB)
#define TIM3_TI4_USB_NOE                  0x00000000U                               /*!< USB_NOE selected selected for PC9 (AF2) remapping */
#define TIM3_TI4_GPIOC9_AF2               TIM3_OR_TI4_RMP                           /*!< TIM3_CH4 selected for PC9 (AF2) remapping */
#endif /* USB */

#define TIM3_TI2_GPIO_DEF                 0x00000000U                               /*!< TIM3_CH2 selected for PB5 (AF4) remapping */
#define TIM3_TI2_GPIOB5_AF4               TIM3_OR_TI2_RMP                           /*!< TIM22_CH2 selected for PB5 (AF4) remapping */

#if defined(USB)
#define TIM3_TI1_USB_SOF                  0x00000000U                               /*!< TIM3 TI1 input connected to USB_SOF */
#define TIM3_TI1_GPIO                     TIM3_OR_TI1_RMP                           /*!< TIM3 TI1 input connected to ORed GPIOs */
#endif /* USB */

#define TIM3_ETR_GPIO                     0x00000000U                               /*!< TIM3 ETR input connected to ORed GPIOs */
#define TIM3_ETR_HSI                      TIM3_OR_ETR_RMP_1                         /*!< TIM3_ETR input is connected to HSI48 clock */
#endif /* TIM3 */
 
#define TIM21_ETR_GPIO                    0x00000000U                               /*!< TIM21 ETR input connected to ORed GPIOs */
#if defined(COMP1) && defined(COMP2)
#define TIM21_ETR_COMP2_OUT               TIM21_OR_ETR_RMP_0                        /*!< TIM21 ETR input connected to COMP2_OUT */
#define TIM21_ETR_COMP1_OUT               TIM21_OR_ETR_RMP_1                        /*!< TIM21 ETR input connected to COMP1_OUT */
#endif /* COMP1 && COMP2 */
#define TIM21_ETR_LSE                     TIM21_OR_ETR_RMP                          /*!< TIM21 ETR input connected to LSE clock */

#define TIM21_TI1_GPIO                    0x00000000U                               /*!< TIM21 TI1 input connected to ORed GPIOs */
#define TIM21_TI1_MCO                     TIM21_OR_TI1_RMP                          /*!< TIM21 TI1 input connected to MCO clock */
#define TIM21_TI1_RTC_WKUT_IT             TIM21_OR_TI1_RMP_0                        /*!< TIM21 TI1 input connected to RTC WAKEUP interrupt */
#define TIM21_TI1_HSE_RTC                 TIM21_OR_TI1_RMP_1                        /*!< TIM21 TI1 input connected to HSE_RTC clock */
#define TIM21_TI1_MSI                     (TIM21_OR_TI1_RMP_0 | TIM21_OR_TI1_RMP_1) /*!< TIM21 TI1 input connected to MSI clock */
#define TIM21_TI1_LSE                     TIM21_OR_TI1_RMP_2                        /*!< TIM21 TI1 input connected to LSE clock */
#define TIM21_TI1_LSI                     (TIM21_OR_TI1_RMP_2 | TIM21_OR_TI1_RMP_0) /*!< TIM21 TI1 input connected to LSI clock */
#if defined(COMP1)
#define TIM21_TI1_COMP1_OUT               (TIM21_OR_TI1_RMP_2 | TIM21_OR_TI1_RMP_1) /*!< TIM21 TI1 input connected to COMP1_OUT */
#endif /* COMP1 */

#define TIM21_TI2_GPIO                    0x00000000U                               /*!< TIM21 TI2 input connected to ORed GPIOs */
#if defined(COMP2)
#define TIM21_TI2_COMP2_OUT               TIM21_OR_TI2_RMP                          /*!< TIM21 TI2 input connected to COMP2_OUT */
#endif /* COMP2 */

#if defined(TIM22)
#define TIM22_ETR_GPIO                    0x00000000U                               /*!< TIM22 ETR input is connected to ORed GPIOs */
#if defined(COMP1) && defined(COMP2)
#define TIM22_ETR_COMP2_OUT               TIM22_OR_ETR_RMP_0                        /*!< TIM22 ETR input is connected to COMP2_OUT */
#define TIM22_ETR_COMP1_OUT               TIM22_OR_ETR_RMP_1                        /*!< TIM22 ETR input is connected to COMP1_OUT */
#endif /* COMP1 && COMP2 */
#define TIM22_ETR_LSE                     TIM22_OR_ETR_RMP                          /*!< TIM22 ETR input is connected to LSE clock */

#define TIM22_TI1_GPIO                   0x00000000U                                /*!< TIM22 TI1 input is connected to ORed GPIOs */
#if defined(COMP1) && defined(COMP2)
#define TIM22_TI1_COMP2_OUT               TIM22_OR_TI1_RMP_0                        /*!< TIM22 TI1 input is connected to COMP2_OUT */
#define TIM22_TI1_COMP1_OUT               TIM22_OR_TI1_RMP_1                        /*!< TIM22 TI1 input is connected to COMP1_OUT */
#endif /* COMP1 && COMP2 */
#endif /* TIM22 */
/**
  * @}
  */

/**
  * @}
  */
/* End of exported constants -------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
/** @defgroup TIMEx_Exported_Macros TIM Extended Exported Macros
  * @{
  */

/**
  * @}
  */
/* End of exported macro -----------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/
/** @defgroup TIMEx_Private_Macros TIM Extended Private Macros
  * @{
  */
#if defined(TIM3) && defined(TIM22)

#define IS_TIM_REMAP(__INSTANCE__, __TIM_REMAP__)               \
        ((((__INSTANCE__) == TIM2)   &&  ((__TIM_REMAP__) <=  (TIM2_OR_TI4_RMP  | TIM2_OR_ETR_RMP))) || \
         (((__INSTANCE__) == TIM22)  &&  ((__TIM_REMAP__) <=  (TIM22_OR_TI1_RMP | TIM22_OR_ETR_RMP))) || \
         (((__INSTANCE__) == TIM21)  &&  ((__TIM_REMAP__) <=  (TIM21_OR_ETR_RMP | TIM21_OR_TI1_RMP | TIM21_OR_TI2_RMP))) || \
         (((__INSTANCE__) == TIM3)   &&  ((__TIM_REMAP__) <=  (TIM3_OR_ETR_RMP  | TIM3_OR_TI1_RMP  | TIM3_OR_TI2_RMP | TIM3_OR_TI4_RMP))))

#define IS_CHANNEL_AVAILABLE(__INSTANCE__, __CHANNEL__)     \
        ((((__INSTANCE__) == TIM2)   &&  (((__CHANNEL__) == TIM_CHANNEL_1)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_2)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_3)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_4))) ||   \
          (((__INSTANCE__) == TIM3) &&   (((__CHANNEL__) == TIM_CHANNEL_1)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_2)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_3)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_4))) ||   \
          (((__INSTANCE__) == TIM21) &&  (((__CHANNEL__) == TIM_CHANNEL_1)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_2))) ||   \
          (((__INSTANCE__) == TIM22) &&  (((__CHANNEL__) == TIM_CHANNEL_1)   ||   \
                                          ((__CHANNEL__) == TIM_CHANNEL_2))))
          
#elif defined(TIM22)

#define IS_TIM_REMAP(__INSTANCE__, __TIM_REMAP__)               \
        ((((__INSTANCE__) == TIM2)   &&  ((__TIM_REMAP__) <=  (TIM2_OR_TI4_RMP  | TIM2_OR_ETR_RMP))) || \
         (((__INSTANCE__) == TIM22)  &&  ((__TIM_REMAP__) <=  (TIM22_OR_TI1_RMP | TIM22_OR_ETR_RMP))) || \
         (((__INSTANCE__) == TIM21)  &&  ((__TIM_REMAP__) <=  (TIM21_OR_ETR_RMP | TIM21_OR_TI1_RMP | TIM21_OR_TI2_RMP))))

#define IS_CHANNEL_AVAILABLE(__INSTANCE__, __CHANNEL__)     \
        ((((__INSTANCE__) == TIM2)   &&   (((__CHANNEL__) == TIM_CHANNEL_1)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_2)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_3)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_4))) || \
          (((__INSTANCE__) == TIM21)  &&  (((__CHANNEL__) == TIM_CHANNEL_1)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_2))) || \
          (((__INSTANCE__) == TIM22)  &&  (((__CHANNEL__) == TIM_CHANNEL_1)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_2))))
#else

#define IS_TIM_REMAP(__INSTANCE__, __TIM_REMAP__)               \
        ((((__INSTANCE__) == TIM2)   &&  ((__TIM_REMAP__) <=  (TIM2_OR_TI4_RMP  | TIM2_OR_ETR_RMP))) || \
         (((__INSTANCE__) == TIM21)  &&  ((__TIM_REMAP__) <=  (TIM21_OR_ETR_RMP | TIM21_OR_TI1_RMP | TIM21_OR_TI2_RMP))))

#define IS_CHANNEL_AVAILABLE(__INSTANCE__, __CHANNEL__)     \
        ((((__INSTANCE__) == TIM2)   &&   (((__CHANNEL__) == TIM_CHANNEL_1)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_2)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_3)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_4))) || \
          (((__INSTANCE__) == TIM21)  &&  (((__CHANNEL__) == TIM_CHANNEL_1)   || \
                                           ((__CHANNEL__) == TIM_CHANNEL_2))))
#endif /* TIM3 && TIM22 */

/**
  * @}
  */
/* End of private macro ------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
/** @addtogroup TIMEx_Exported_Functions TIM Extended Exported Functions
  * @{
  */

/** @addtogroup TIMEx_Exported_Functions_Group5 Extended Peripheral Control functions
 *  @brief    Peripheral Control functions
 * @{
 */
/* Extended Control functions  ************************************************/
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *htim, TIM_MasterConfigTypeDef * sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef *htim, uint32_t Remap);
/**
  * @}
  */

/**
  * @}
  */
/* End of exported functions -------------------------------------------------*/

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif


#endif /* __STM32L0xx_HAL_TIM_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/