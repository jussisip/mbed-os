/***************************************************************************//**
* \file CY8CPROTO-064-SB/cybsp_types.h
*
* Description:
* Provides APIs for interacting with the hardware contained on the Cypress
* CY8CPROTO-064-SB kit.
*
********************************************************************************
* \copyright
* Copyright 2018-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#include "cyhal_pin_package.h"

#if defined(__cplusplus)
extern "C" {
#endif


/**
* \addtogroup group_bsp_pin_state Pin States
* \{
*/

/** Pin state for the LED on. */
#define CYBSP_LED_STATE_ON          (0U)
/** Pin state for the LED off. */
#define CYBSP_LED_STATE_OFF         (1U)

/** Pin state for when a button is pressed. */
#define CYBSP_BTN_PRESSED           (0U)
/** Pin state for when a button is released. */
#define CYBSP_BTN_OFF               (1U)

/** \} group_bsp_pin_state */


/**
* \addtogroup group_bsp_pins Pin Mappings
* \{
*/

/**
* \addtogroup group_bsp_pins_led LED Pins
* \{
*/

/** LED 3; User LED1 */
#define CYBSP_LED3                  (P13_7)
/** LED 4; User LED2 */
#define CYBSP_LED4                  (P1_5)

/** LED 3; User LED1 */
#define CYBSP_USER_LED1             (CYBSP_LED3)
/** LED 4; User LED2 */
#define CYBSP_USER_LED2             (CYBSP_LED4)
/** LED 3; User LED1 */
#define CYBSP_USER_LED              (CYBSP_USER_LED1)

/** \} group_bsp_pins_led */

/**
* \addtogroup group_bsp_pins_btn Button Pins
* \{
*/

/** Switch 2; User Button 1 */
#define CYBSP_SW2                   (P0_4)

/** Switch 2; User Button 1 */
#define CYBSP_USER_BTN1             (CYBSP_SW2)
/** Switch 2; User Button 1 */
#define CYBSP_USER_BTN              (CYBSP_USER_BTN1)

/** \} group_bsp_pins_btn */


/**
* \addtogroup group_bsp_pins_comm Communication Pins
* \{
*/

/** Pin: UART RX */
#define CYBSP_UART_RX               (P5_0)
/** Pin: UART TX */
#define CYBSP_UART_TX               (P5_1)

/** Pin: UART RX */
#define CYBSP_DEBUG_UART_RX         (P5_0)
/** Pin: UART TX */
#define CYBSP_DEBUG_UART_TX         (P5_1)

/** Pin: I2C SCL */
#define CYBSP_I2C_SCL               (P6_0)
/** Pin: I2C SDA */
#define CYBSP_I2C_SDA               (P6_1)

/** Pin: SWDIO */
#define CYBSP_SWDIO                 (P6_6)
/** Pin: SWDCK */
#define CYBSP_SWDCK                 (P6_7)
/** Pin: SWO */
#define CYBSP_SWO                   (P6_4)

/** Pin: QUAD SPI SS */
#define CYBSP_QSPI_SS               (P11_2)
/** Pin: QUAD SPI D3 */
#define CYBSP_QSPI_D3               (P11_3)
/** Pin: QUAD SPI D2 */
#define CYBSP_QSPI_D2               (P11_4)
/** Pin: QUAD SPI D1 */
#define CYBSP_QSPI_D1               (P11_5)
/** Pin: QUAD SPI D0 */
#define CYBSP_QSPI_D0               (P11_6)
/** Pin: QUAD SPI SCK */
#define CYBSP_QSPI_SCK              (P11_7)

/** \} group_bsp_pins_comm */

/** \} group_bsp_pins */


#if defined(__cplusplus)
}
#endif
