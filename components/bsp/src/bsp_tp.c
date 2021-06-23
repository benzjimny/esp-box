/**
 * @file bsp_tp.c
 * @brief 
 * @version 0.1
 * @date 2021-07-05
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

#include "bsp_i2c.h"
#include "bsp_board.h"
#include "bsp_tp.h"
#include "esp_log.h"
#include "esp_err.h"
#include "i2c_bus.h"

#include "ft5x06.h"
#include "goodix.h"

static const char *TAG = "bsp_tp";
typedef enum {
    TP_VENDOR_NONE = -1,
    TP_VENDOR_FT = 0,
    TP_VENDOR_GT,
    TP_VENDOR_MAX,
} tp_vendor_t;

typedef struct {
    char *dev_name;
    uint8_t dev_addr;
    tp_vendor_t dev_vendor;
} tp_dev_t;

static tp_dev_t tp_dev_list[] = {
    { "FocalTech", 0x38, TP_VENDOR_FT, },
    { "Goodix", 0x14, TP_VENDOR_GT },
};

static tp_vendor_t tp_vendor = TP_VENDOR_NONE;

static esp_err_t bsp_tp_prob(tp_vendor_t *p_tp_vendor)
{
    for (size_t i = 0; i < sizeof(tp_dev_list) / sizeof(tp_dev_list[0]); i++) {
        if (ESP_OK == bsp_i2c_probe_addr(tp_dev_list[i].dev_addr)) {
            *p_tp_vendor = (tp_vendor_t) i;
            ESP_LOGI(TAG, "Detected touch panel at 0x%02X. Vendor : %s",
                tp_dev_list[i].dev_addr, tp_dev_list[i].dev_name);
            return ESP_OK;
        }
    }

    *p_tp_vendor = TP_VENDOR_NONE;
    ESP_LOGW(TAG, "Touch panel not detected");
    return ESP_ERR_NOT_FOUND;
}

esp_err_t bsp_tp_init(void)
{
    esp_err_t ret_val = ESP_OK;

    ret_val |= bsp_tp_prob(&tp_vendor);

    switch (tp_vendor) {
    case TP_VENDOR_FT:
        ret_val |= ft5x06_init();
        break;
    case TP_VENDOR_GT:
        ret_val |= goodix_tp_init();
        break;
    default:
        ret_val = ESP_OK; // ESP_ERR_NOT_FOUND;
        break;
    }

    return ret_val;
}

esp_err_t bsp_tp_read(uint8_t *tp_num, uint16_t *x, uint16_t *y)
{
    esp_err_t ret_val = ESP_OK;

    switch (tp_vendor) {
    case TP_VENDOR_FT:
        ret_val |= ft5x06_read_pos(tp_num, x, y);
        break;
    case TP_VENDOR_GT:
        ret_val |= goodix_tp_read(tp_num, x, y);
        break;
    default:
        return ESP_OK; // ESP_ERR_NOT_FOUND;
        break;
    }

#if TOUCH_PANEL_SWAP_XY
    uint16_t swap = *x;
    *x = *y;
    *y = swap;
#endif

#if TOUCH_PANEL_INVERSE_X
    *x = LCD_WIDTH - ( *x + 1);
#endif

#if TOUCH_PANEL_INVERSE_Y
    *y = LCD_HEIGHT - (*y + 1);
#endif

    return ret_val;
}
