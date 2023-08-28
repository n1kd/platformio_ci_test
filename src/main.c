
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "main";

void app_main() {
    ESP_LOGI(TAG, "Start %s ", __func__);
    int index = 0;
    while (1) {
        ESP_LOGI(TAG, "index %d ", index++);
        vTaskDelay(100);
    }
}