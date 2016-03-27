/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "COLI"

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)

#define USE_EXTI

#define LED0 PC14
#define LED1 PC13

#define BEEPER PC5
#define BEEPER_INVERTED

#define INVERTER PB2 // PC2 used as inverter select GPIO
#define INVERTER_USART USART2

#define MPU6000_CS_PIN        PC4
#define MPU6000_SPI_INSTANCE  SPI1

#define ACC
#define USE_ACC_MPU6000
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN CW270_DEG_FLIP

#define GYRO
#define USE_GYRO_MPU6000
#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN CW270_DEG_FLIP

#define BARO
#define USE_BARO_MS5611

#define MAG
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN CW270_DEG_FLIP

#define M25P16_CS_PIN         PB12
#define M25P16_SPI_INSTANCE   SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USABLE_TIMER_CHANNEL_COUNT 16

// up to here

// MPU6500 interrupt
//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW
//#define EXTI_CALLBACK_HANDLER_COUNT 1 // MPU data ready
#define MPU_INT_EXTI PC0

#define USE_VCP
#define VBUS_SENSING PA9 					// ???? check this

#define USE_USART1
#define USART1_RX_PIN PB7
#define USART1_TX_PIN PB6
#define USART1_AHB1_PERIPHERALS RCC_AHB1Periph_DMA2

#define USE_USART2
#define USART2_RX_PIN PA3
#define USART2_TX_PIN PA2

#define USE_USART4
#define USART4_RX_PIN PC11
#define USART4_TX_PIN PC10

#define USE_USART5
#define USART5_RX_PIN PD2
#define USART5_TX_PIN PC12

#define SERIAL_PORT_COUNT 5					//VCP, USART1, USART2, USART4, USART5

#define USE_ESCSERIAL						// ?? check this
#define ESCSERIAL_TIMER_TX_HARDWARE 0		// ?? check this

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PC4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
#define SPI3_NSS_PIN            PB12
#define SPI3_SCK_PIN            PB13
#define SPI3_MISO_PIN           PC2
#define SPI3_MOSI_PIN           PC3

#define USE_I2C
// #define I2C_DEVICE (I2CDEV_1)
// #define I2C_DEVICE (I2CDEV_3)
// #define I2C_DEVICE (I2CDEV_2)

#define SENSORS_SET (SENSOR_ACC|SENSOR_MAG|SENSOR_BARO)

#define USE_ADC
#define VBAT_ADC_PIN                PC0
#define VBAT_ADC_CHANNEL            ADC_Channel_0

#define LED_STRIP
#define LED_STRIP_TIMER TIM4

//#define GPS
#define BLACKBOX
#define TELEMETRY
#define SERIAL_RX
#define AUTOTUNE
// #define USE_QUAD_MIXER_ONLY
#define USE_SERVOS
#define USE_CLI

#define USE_QUATERNION

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
