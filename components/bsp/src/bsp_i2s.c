/**
 * @file bsp_i2s.c
 * @brief 
 * @version 0.1
 * @date 2021-07-23
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

#include "bsp_board.h"
#include "bsp_i2s.h"
#include "driver/gpio.h"
#include "driver/i2s.h"
#include "esp_err.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"

// static const char *TAG = "bsp_i2s";

#if SOC_I2S_SUPPORTS_TDM
/**
 * @brief Will usb TDM mode to drive more than one codec on I2S bus.
 * 
 */
#define I2S_CONFIG_DEFAULT() { \
    .mode                   = I2S_MODE_MASTER | I2S_MODE_TX | I2S_MODE_RX, \
    .sample_rate            = sample_rate, \
    .bits_per_sample        = I2S_BITS_PER_SAMPLE_16BIT, \
    .channel_format         = I2S_CHANNEL_FMT_MULTIPLE, \
    .communication_format   = I2S_COMM_FORMAT_STAND_PCM_SHORT, \
    .dma_buf_count          = 8, \
    .dma_buf_len            = 256, \
    .use_apll               = true, \
    .intr_alloc_flags       = ESP_INTR_FLAG_LEVEL1 | ESP_INTR_FLAG_IRAM, \
    .fixed_mclk             = 0, \
    .chan_mask              = I2S_TDM_ACTIVE_CH0 | I2S_TDM_ACTIVE_CH1, \
}
#else

#define I2S_CONFIG_DEFAULT() { \
    .mode                   = I2S_MODE_MASTER | I2S_MODE_TX | I2S_MODE_RX, \
    .sample_rate            = sample_rate, \
    .bits_per_sample        = I2S_BITS_PER_SAMPLE_16BIT, \
    .channel_format         = I2S_CHANNEL_FMT_RIGHT_LEFT, \
    .communication_format   = I2S_COMM_FORMAT_STAND_I2S, \
    .dma_buf_count          = 8, \
    .dma_buf_len            = 256, \
    .use_apll               = true, \
    .intr_alloc_flags       = ESP_INTR_FLAG_LEVEL1 | ESP_INTR_FLAG_IRAM, \
    .mclk_multiple          = I2S_MCLK_MULTIPLE_DEFAULT, \
}

#endif

esp_err_t bsp_i2s_init(i2s_port_t i2s_num, uint32_t sample_rate)
{
    esp_err_t ret_val = ESP_OK;

    i2s_config_t i2s_config = I2S_CONFIG_DEFAULT();

    i2s_pin_config_t pin_config = {
        .bck_io_num = GPIO_I2S_SCLK,
        .ws_io_num = GPIO_I2S_LRCK,
        .data_out_num = GPIO_I2S_DOUT,
        .data_in_num = GPIO_I2S_SDIN,
        .mck_io_num = GPIO_I2S_MCLK,
    };

    ret_val |= i2s_driver_install(i2s_num, &i2s_config, 0, NULL);
    ret_val |= i2s_set_pin(i2s_num, &pin_config);

    return ret_val;
}

esp_err_t bsp_i2s_deinit(i2s_port_t i2s_num)
{
    return i2s_driver_uninstall(i2s_num);
}