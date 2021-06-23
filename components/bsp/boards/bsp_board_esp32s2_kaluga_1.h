/**
 * @file bsp_board_esp32s2_kaluga_1.h
 * @brief 
 * @version 0.1
 * @date 2021-06-25
 * 
 * @copyright Copyright 2021 Espressif Systems (Shanghai) Co. Ltd.
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *               http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */
#pragma once

#include "driver/gpio.h"

/**
 * @brief ESP32-S2-HMI-DevKit LCD GPIO defination and config
 * 
 */
#define FUNC_LCD_EN     (1)
#define LCD_IFACE_SPI   (1)
#define LCD_DISP_IC_ST  (1)
#define LCD_BUS_WIDTH   (1)
#define LCD_WIDTH       (320)
#define LCD_HEIGHT      (240)
#define LCD_FREQ        (40 * 1000 * 1000)
#define LCD_HOST        (SPI2_HOST)

#define LCD_SWAP_XY     (true)
#define LCD_MIRROR_X    (true)
#define LCD_MIRROR_Y    (false)
#define LCD_COLOR_INV   (false)

#define GPIO_LCD_BL     (GPIO_NUM_6)
#define GPIO_LCD_BL_ON  (0)
#define GPIO_LCD_CS     (GPIO_NUM_11)
#define GPIO_LCD_RST    (GPIO_NUM_16)
#define GPIO_LCD_DC     (GPIO_NUM_13)
#define GPIO_LCD_CLK    (GPIO_NUM_15)
#define GPIO_LCD_DIN    (GPIO_NUM_9)
#define GPIO_LCD_DOUT   (GPIO_NUM_NC)

/**
 * @brief ESP32-S2-HMI-DevKit I2C GPIO defineation
 * 
 */
#define FUNC_I2C_EN         (1)
#define GPIO_I2C_SCL        (GPIO_NUM_7)
#define GPIO_I2C_SDA        (GPIO_NUM_8)

/**
 * @brief ESP32-S2-HMI-DevKit SDMMC GPIO defination
 * 
 */
#define FUNC_SDMMC_EN       (0)
#define SDMMC_BUS_WIDTH     (0)
#define GPIO_SDMMC_CLK      (GPIO_NUM_NC)
#define GPIO_SDMMC_CMD      (GPIO_NUM_NC)
#define GPIO_SDMMC_D0       (GPIO_NUM_NC)
#define GPIO_SDMMC_D1       (GPIO_NUM_NC)
#define GPIO_SDMMC_D2       (GPIO_NUM_NC)
#define GPIO_SDMMC_D3       (GPIO_NUM_NC)
#define GPIO_SDMMC_DET      (GPIO_NUM_NC)

/**
 * @brief ESP32-S2-HMI-DevKit SDSPI GPIO definationv
 * 
 */
#define FUNC_SDSPI_EN       (0)
#define GPIO_SDSPI_CS       (GPIO_NUM_34)
#define GPIO_SDSPI_SCLK     (GPIO_NUM_36)
#define GPIO_SDSPI_MISO     (GPIO_NUM_37)
#define GPIO_SDSPI_MOSI     (GPIO_NUM_35)

/**
 * @brief ESP32-S2-HMI-DevKit RMT GPIO defination
 * 
 */
#define FUNC_RMT_EN         (1)
#define GPIO_RMT_IR         (GPIO_NUM_45)
#define GPIO_RMT_LED        (GPIO_NUM_45)

/**
 * @brief ESP32-S3-HMI-DevKit PA power control IO
 * 
 */
#define FUNC_PWR_CTRL       (1)
#define GPIO_PWR_CTRL       (GPIO_NUM_10)
#define GPIO_PWR_ON_LEVEL   (1)

/**
 * @brief ESP32-S2-HMI-DevKit I2S GPIO defination
 * 
 */
#define FUNC_I2S_EN         (0)
#define GPIO_I2S_LRCK       (GPIO_NUM_17)
#define GPIO_I2S_MCLK       (GPIO_NUM_35)
#define GPIO_I2S_SCLK       (GPIO_NUM_18)
#define GPIO_I2S_SDIN       (GPIO_NUM_34)
#define GPIO_I2S_DOUT       (GPIO_NUM_12)

#define FUNC_CAM_EN         (1)
#define GPIO_CAM_SCL        (GPIO_NUM_7)
#define GPIO_CAM_SDA        (GPIO_NUM_8)
#define GPIO_CAM_PCLK       (GPIO_NUM_33)
#define GPIO_CAM_XCLK       (GPIO_NUM_1)
#define GPIO_CAM_HSYNC      (GPIO_NUM_3)
#define GPIO_CAM_VSYNC      (GPIO_NUM_2)
#define GPIO_CAM_RST        (GPIO_NUM_NC)
#define GPIO_CAM_PWDN       (GPIO_NUM_NC)
#define GPIO_CAM_Y2         (GPIO_NUM_36)
#define GPIO_CAM_Y3         (GPIO_NUM_37)
#define GPIO_CAM_Y4         (GPIO_NUM_41)
#define GPIO_CAM_Y5         (GPIO_NUM_42)
#define GPIO_CAM_Y6         (GPIO_NUM_39)
#define GPIO_CAM_Y7         (GPIO_NUM_40)
#define GPIO_CAM_Y8         (GPIO_NUM_21)
#define GPIO_CAM_Y9         (GPIO_NUM_38)
