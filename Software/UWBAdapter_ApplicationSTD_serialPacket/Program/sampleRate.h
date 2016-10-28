/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    sampleRate.h
  * @author  KitSprout
  * @date    29-Oct-2016
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __SAMPLERATE_H
#define __SAMPLERATE_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "drivers\stm32f4_system.h"

/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/
#define __SAMPLE_RATE_FREQ1KHz_

#ifdef __SAMPLE_RATE_FREQ10Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)10)        // 10Hz
  #define SAMPLE_RATE       ((float32_t)0.1f)     // 100ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.05f)    // 50ms
#endif

#ifdef __SAMPLE_RATE_FREQ50Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)50)        // 50Hz
  #define SAMPLE_RATE       ((float32_t)0.02f)    // 20ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.01f)    // 10ms
#endif

#ifdef __SAMPLE_RATE_FREQ100Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)100)       // 100Hz
  #define SAMPLE_RATE       ((float32_t)0.01f)    // 10ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.005f)   // 5ms
#endif

#ifdef __SAMPLE_RATE_FREQ200Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)200)       // 200Hz
  #define SAMPLE_RATE       ((float32_t)0.005f)   // 5ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.0025f)  // 2.5ms
#endif

#ifdef __SAMPLE_RATE_FREQ400Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)400)       // 400Hz
  #define SAMPLE_RATE       ((float32_t)0.0025f)  // 2.5ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.00125f) // 1.25ms
#endif

#ifdef __SAMPLE_RATE_FREQ500Hz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)500)       // 500Hz
  #define SAMPLE_RATE       ((float32_t)0.002f)   // 2.0ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.001f)   // 1.0ms
#endif

#ifdef __SAMPLE_RATE_FREQ1KHz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)1000)      // 1KHz
  #define SAMPLE_RATE       ((float32_t)0.001f)   // 1.0ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.0005f)  // 0.5ms
#endif

#ifdef __SAMPLE_RATE_FREQ2KHz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)2000)      // 2KHz
  #define SAMPLE_RATE       ((float32_t)0.0005f)  // 0.5ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.00025f) // 0.25ms
#endif

#ifdef __SAMPLE_RATE_FREQ4KHz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)4000)        // 4KHz
  #define SAMPLE_RATE       ((float32_t)0.00025f)   // 0.25ms
  #define SAMPLE_RATE_HELF  ((float32_t)0.000125f)  // 0.125ms
#endif

#ifdef __SAMPLE_RATE_FREQ10KHz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)10000)       // 10KHz
  #define SAMPLE_RATE       ((float32_t)0.0001f)    // 10us
  #define SAMPLE_RATE_HELF  ((float32_t)0.00005f)   // 5us
#endif

#ifdef __SAMPLE_RATE_FREQ20KHz_
  #define SAMPLE_RATE_FREQ  ((uint16_t)20000)       // 20KHz
  #define SAMPLE_RATE       ((float32_t)0.00005f)   // 5us
  #define SAMPLE_RATE_HELF  ((float32_t)0.000025f)  // 25us
#endif

/* Exported functions ----------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
