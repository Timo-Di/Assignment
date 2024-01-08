#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

// Include necessary FreeRTOS headers
#include <stdint.h>

// Use the default heap implementation (heap_4.c)
#define configUSE_HEAP_TRACING 0
#define configUSE_MALLOC_FAILED_HOOK 1

// Set the system clock frequency (Hz)
#define configCPU_CLOCK_HZ             (SystemCoreClock)
#define configTICK_RATE_HZ             ((TickType_t)1000)

// Configure the scheduler
#define configUSE_PREEMPTION           1
#define configUSE_TIME_SLICING         1
#define configUSE_IDLE_HOOK            0
#define configUSE_TICK_HOOK            0
#define configMAX_PRIORITIES           (5)
#define configMINIMAL_STACK_SIZE       ((uint16_t)128)
#define configTOTAL_HEAP_SIZE          ((size_t)(10 * 1024))

// Configure task priorities
#define configIDLE_SHOULD_YIELD        1
#define configMAX_TASK_NAME_LEN        (16)
#define configUSE_16_BIT_TICKS         0
#define configUSE_MUTEXES              1
#define configQUEUE_REGISTRY_SIZE      8

// Use the default tickless idle mode (if supported)
#define configUSE_TICKLESS_IDLE        0

// Use software timer features
#define configUSE_TIMERS               1
#define configTIMER_TASK_PRIORITY      (configMAX_PRIORITIES - 1)
#define configTIMER_QUEUE_LENGTH       10
#define configTIMER_TASK_STACK_DEPTH   ((uint16_t)128)

// Use trace macros for debugging
#define configUSE_TRACE_FACILITY      0
#define configUSE_STATS_FORMATTING_FUNCTIONS 1

#endif /* FREERTOS_CONFIG_H */
