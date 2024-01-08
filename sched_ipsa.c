#include <FreeRTOS.h>
#include <task.h>

// Task function for Task1
void Task1Function(void *pvParameters) {
    while (1) {
        // Task1 logic
        // For simplicity, just print a message
        printf("Task1 is running...\n");
        vTaskDelay(pdMS_TO_TICKS(1000));  // Delay for 1000 milliseconds
    }
}

// Task function for Task2
void Task2Function(void *pvParameters) {
    while (1) {
        // Task2 logic
        // For simplicity, just print a message
        printf("Task2 is running...\n");
        vTaskDelay(pdMS_TO_TICKS(500));  // Delay for 500 milliseconds
    }
}

int main(void) {
    // Initialize hardware and peripherals (if needed)

    // Create tasks
    xTaskCreate(Task1Function, "Task1", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
    xTaskCreate(Task2Function, "Task2", configMINIMAL_STACK_SIZE, NULL, 2, NULL);

    // Start the FreeRTOS scheduler
    vTaskStartScheduler();

    // The scheduler should never return, but if it does, handle the error
    while (1) {
        // Handle error or reset the system
    }

    return 0;
}
