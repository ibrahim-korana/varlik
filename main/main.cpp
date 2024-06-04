#include "esp_log.h"
#include "assert.h"
#include "esp_system.h"
#include "esp_event.h"
#include <string.h>
#include <stdio.h>

extern "C" void app_main()
{
    while(true) {
        vTaskDelay(10/portTICK_PERIOD_MS);
    }
}