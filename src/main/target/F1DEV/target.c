//new target for F1 Dev Board (diy fc)

//CC3D
#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {

    DEF_TIM(TIM1, CH1, PA8, TIM_USE_MOTOR,             1), // S4_OUT
    
    DEF_TIM(TIM2, CH1, PA0, TIM_USE_PWM,               0),   // S5_IN - Vbattery
    DEF_TIM(TIM2, CH2, PA1, TIM_USE_PWM | TIM_USE_PPM, 0),   // S6_IN - PPM IN
    DEF_TIM(TIM2, CH3, PA2, TIM_USE_MOTOR,             1)  // S6_OUT
        
    DEF_TIM(TIM3, CH1, PB4, TIM_USE_MOTOR,             1), // S5_OUT - GPIO_PartialRemap_TIM3 - LED Strip
    DEF_TIM(TIM3, CH2, PB5, TIM_USE_PWM,               0),   // S2_IN - SoftSerial TX - GPIO_PartialRemap_TIM3 / Sonar trigger
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_PWM,               0),   // S3_IN - SoftSerial RX / Sonar echo / RSSI ADC
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_PWM,               0),   // S4_IN - Current
    
    DEF_TIM(TIM4, CH1, PB6, TIM_USE_PWM,               0),   // S1_IN/
    DEF_TIM(TIM4, CH2, PB7, TIM_USE_MOTOR,             1), // S3_OUT
    DEF_TIM(TIM4, CH3, PB8, TIM_USE_MOTOR,             1), // S2_OUT
    DEF_TIM(TIM4, CH4, PB9, TIM_USE_MOTOR,             1), // S1_OUT

};

//F1 DEV

PA8  TIM1_CH1              --> PPM In (alternate to T2C1??)
PA9  USART1_TX (TIM1_CH2)
PA10 USART1_RX (TIM1_CH3)
PA11 TIM1_CH4

PA0  TIM2_CH1_ETR          --> PWM 8 (PPM In)
PA1  TIM2_CH2              --> PWM 1
PA2  USART2_TX (TIM2_CH3)
PA3  USART2_RX (TIM2_CH4)

PA6  TIM3_CH1              --> PWM 4
PA7  TIM3_CH2              --> PWM 5
PB0  TIM3_CH3              --> PWM 6
PB1  TIM3_CH4              --> PWM 7

PB6  I2C1_SCL (TIM4_CH1)
PB7  I2C1_SDA (TIM4_CH2)
PB8  TIM4_CH3              --> PWM 2
PB9  TIM4_CH4              --> PWM 3

PB10 USART3_TX (I2C2_SCL)
PB11 USART3_RX (I2C2_SDA)
    

PB13 TIM1_CH1N
PB14 TIM1_CH2N
PB15 TIM1_CH3N




//NAZE
#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_MOTOR,             1), // PWM9 - OUT1
    DEF_TIM(TIM1, CH4, PA11, TIM_USE_MOTOR,             1), // PWM10 - OUT2
    
    DEF_TIM(TIM2, CH1, PA0,  TIM_USE_PPM | TIM_USE_PWM, 0), // PWM1 - RC1
    DEF_TIM(TIM2, CH2, PA1,  TIM_USE_PWM,               0), // PWM2 - RC2
    DEF_TIM(TIM2, CH3, PA2,  TIM_USE_PWM,               0), // PWM3 - RC3
    DEF_TIM(TIM2, CH4, PA3,  TIM_USE_PWM,               0), // PWM4 - RC4
    
    DEF_TIM(TIM3, CH1, PA6,  TIM_USE_PWM | TIM_USE_LED, 0), // PWM5 - RC5
    DEF_TIM(TIM3, CH2, PA7,  TIM_USE_PWM,               0), // PWM6 - RC6
    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_PWM,               0), // PWM7 - RC7
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_PWM,               0), // PWM8 - RC8
    
    DEF_TIM(TIM4, CH1, PB6,  TIM_USE_MOTOR,             1), // PWM11 - OUT3
    DEF_TIM(TIM4, CH2, PB7,  TIM_USE_MOTOR,             1), // PWM12 - OUT4
    DEF_TIM(TIM4, CH3, PB8,  TIM_USE_MOTOR,             1), // PWM13 - OUT5
    DEF_TIM(TIM4, CH4, PB9,  TIM_USE_MOTOR,             1)  // PWM14 - OUT6
};
