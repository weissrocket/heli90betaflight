//CC3D

#define TARGET_BOARD_IDENTIFIER "CC3D" // CopterControl 3D

#define LED0_PIN                PB3

#define INVERTER_PIN_UART1      PB2 // PB2 (BOOT1) used as inverter select GPIO

#define BEEPER                  PA15
#define BEEPER_OPT              PA2

#define USE_EXTI
#define MPU_INT_EXTI            PA3
#define USE_MPU_DATA_READY_SIGNAL
//#define DEBUG_MPU_DATA_READY_INTERRUPT

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define MPU6000_CS_GPIO         GPIOA
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_INSTANCE    SPI1

#define M25P16_CS_GPIO          GPIOB
#define M25P16_CS_PIN           PB12
#define M25P16_SPI_INSTANCE     SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define GYRO
#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN CW270_DEG

#define ACC
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN CW270_DEG

// MPU6000 interrupts
#define USE_MPU_DATA_READY_SIGNAL

//#define USE_I2C
//#define I2C_DEVICE (I2CDEV_2) // Flex port - SCL/PB10, SDA/PB11

// External I2C BARO
//#define BARO
//#define USE_BARO_MS5611
//#define USE_BARO_BMP085
//#define USE_BARO_BMP280

// External I2C MAG
//#define MAG
//#define USE_MAG_HMC5883

#define USE_VCP
#define USE_UART1
#define USE_UART3
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       5

#ifndef CC3D_OPBL
#define SOFTSERIAL1_TX_PIN      PB5 // PWM 2
#define SOFTSERIAL1_RX_PIN      PB0 // PWM 3
#endif

#ifdef USE_UART1_RX_DMA
#undef USE_UART1_RX_DMA
#endif

#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PB1
#define VBAT_ADC_PIN            PA0
#define RSSI_ADC_PIN            PB0

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

//#define SONAR
//#define SONAR_ECHO_PIN          PB0
//#define SONAR_TRIGGER_PIN       PB5

#undef MAG

#ifdef CC3D_OPBL
#define SKIP_CLI_COMMAND_HELP
//#undef USE_SERVOS
#undef BARO
#undef SONAR
#undef USE_SERIAL_4WAY_BLHELI_INTERFACE
//#undef USE_SERIALRX_SPEKTRUM   // SRXL, DSM2 and DSMX protocol
//#undef USE_SERIALRX_SBUS       // Frsky and Futaba receivers
//#undef USE_SERIALRX_IBUS       // FlySky and Turnigy receivers
#undef USE_SERIALRX_CRSF       // Team Black Sheep Crossfire protocol
#undef USE_SERIALRX_SUMD       // Graupner Hott protocol
#undef USE_SERIALRX_SUMH       // Graupner legacy protocol
#undef USE_SERIALRX_XBUS       // JR
#undef LED_STRIP
#endif

//#undef LED_STRIP
#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM

// IO - from schematics
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         ( BIT(14) )

#define USABLE_TIMER_CHANNEL_COUNT 12
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )


//NAZE

#pragma once

#define TELEMETRY_IBUS

#define TARGET_CONFIG
#define TARGET_VALIDATECONFIG
#define USE_HARDWARE_REVISION_DETECTION
#define TARGET_BUS_INIT

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC

#define LED0_PIN                PB3
#define LED1_PIN                PB4

#define BEEPER                  PA12

#if defined(AFROMINI)
#define BEEPER_INVERTED
#define TARGET_BOARD_IDENTIFIER "AFMN"
#elif defined(BEEBRAIN)
#define BRUSHED_MOTORS
#define TARGET_BOARD_IDENTIFIER "BEBR"
#define TARGET_CONFIG
#define DEFAULT_FEATURES FEATURE_MOTOR_STOP
#else
#define TARGET_BOARD_IDENTIFIER "AFNA"
// Beeper configuration is handled in 'config.c', since it is dependent on hardware revision
#endif

//#define BARO_XCLR_PIN           PC13
//#define BARO_EOC_PIN            PC14

#define INVERTER_PIN_UART2        PB2 // PB2 (BOOT1) abused as inverter select GPIO

#define USE_RX_MSP

#define USE_EXTI
#define MAG_INT_EXTI            PC14
#define MPU_INT_EXTI            PC13
#define MMA8451_INT_PIN         PA5

#define USE_MPU_DATA_READY_SIGNAL
#define USE_MAG_DATA_READY_SIGNAL

#define USE_SPI
#define USE_SPI_DEVICE_2

#define NAZE_SPI_INSTANCE       SPI2
#define NAZE_SPI_CS_PIN         PB12

// We either have this 16mbit flash chip on SPI or the MPU6500 acc/gyro depending on board revision:
#define M25P16_CS_PIN           NAZE_SPI_CS_PIN
#define M25P16_SPI_INSTANCE     NAZE_SPI_INSTANCE

#define MPU6500_CS_PIN          NAZE_SPI_CS_PIN
#define MPU6500_SPI_INSTANCE    NAZE_SPI_INSTANCE

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define GYRO
#define USE_GYRO_MPU3050
#define USE_GYRO_MPU6050
#define USE_GYRO_MPU6500
#define USE_GYRO_SPI_MPU6500

#define GYRO_MPU3050_ALIGN      CW0_DEG
#define GYRO_MPU6050_ALIGN      CW0_DEG
#define GYRO_MPU6500_ALIGN      CW0_DEG

#define ACC
#define USE_ACC_ADXL345
#define USE_ACC_BMA280
#define USE_ACC_MMA8452
#define USE_ACC_MPU6050
#define USE_ACC_MPU6500
#define USE_ACC_SPI_MPU6500

#define ACC_ADXL345_ALIGN       CW270_DEG
#define ACC_MPU6050_ALIGN       CW0_DEG
#define ACC_MMA8452_ALIGN       CW90_DEG
#define ACC_BMA280_ALIGN        CW0_DEG
#define ACC_MPU6500_ALIGN       CW0_DEG

#define BARO
#define USE_BARO_MS5611 // needed for Flip32 board
#define USE_BARO_BMP280

/*
#define MAG
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN       CW180_DEG
*/

//#define SONAR
//#define SONAR_TRIGGER_PIN       PB0
//#define SONAR_ECHO_PIN          PB1
//#define SONAR_TRIGGER_PIN_PWM   PB8
//#define SONAR_ECHO_PIN_PWM      PB9

#define USE_UART1
#define USE_UART2
/* only 2 uarts available on the NAZE, add ifdef here if present on other boards */
//#define USE_UART3
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2
#define SERIAL_PORT_COUNT       4

#define SOFTSERIAL1_RX_PIN      PA6 // PWM 5
#define SOFTSERIAL1_TX_PIN      PA7 // PWM 6

#define SOFTSERIAL2_RX_PIN      PB0 // PWM 7
#define SOFTSERIAL2_TX_PIN      PB1 // PWM 8

#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C_DEVICE              (I2CDEV_2)

// #define SOFT_I2C // enable to test software i2c
// #define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
// #define SOFT_I2C_PB67

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PB1
#define VBAT_ADC_PIN            PA4
#define RSSI_ADC_PIN            PA1
#define EXTERNAL1_ADC_PIN       PA5

#define USE_SPEKTRUM_BIND_PIN

#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM

// IO - assuming all IOs on 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         ( BIT(13) | BIT(14) | BIT(15) )

#define USABLE_TIMER_CHANNEL_COUNT 14
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )
