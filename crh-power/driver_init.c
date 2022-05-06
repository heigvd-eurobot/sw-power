/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

#include <hpl_rtc_base.h>

struct timer_descriptor TIMER_0;

struct i2c_s_async_descriptor I2C_0;
uint8_t                       SERCOM0_i2c_s_buffer[SERCOM0_I2CS_BUFFER_SIZE];

struct i2c_s_async_descriptor I2C_1;
uint8_t                       SERCOM1_i2c_s_buffer[SERCOM1_I2CS_BUFFER_SIZE];

void I2C_0_PORT_init(void)
{

	gpio_set_pin_pull_mode(PA08,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(PA08, PINMUX_PA08C_SERCOM0_PAD0);

	gpio_set_pin_pull_mode(PA09,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(PA09, PINMUX_PA09C_SERCOM0_PAD1);
}

void I2C_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM0);
	_gclk_enable_channel(SERCOM0_GCLK_ID_CORE, CONF_GCLK_SERCOM0_CORE_SRC);
	_gclk_enable_channel(SERCOM0_GCLK_ID_SLOW, CONF_GCLK_SERCOM0_SLOW_SRC);
}

void I2C_0_init(void)
{
	I2C_0_CLOCK_init();
	i2c_s_async_init(&I2C_0, SERCOM0, SERCOM0_i2c_s_buffer, SERCOM0_I2CS_BUFFER_SIZE);
	I2C_0_PORT_init();
}

void I2C_1_PORT_init(void)
{

	gpio_set_pin_pull_mode(PA16,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(PA16, PINMUX_PA16C_SERCOM1_PAD0);

	gpio_set_pin_pull_mode(PA17,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(PA17, PINMUX_PA17C_SERCOM1_PAD1);
}

void I2C_1_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM1);
	_gclk_enable_channel(SERCOM1_GCLK_ID_CORE, CONF_GCLK_SERCOM1_CORE_SRC);
	_gclk_enable_channel(SERCOM1_GCLK_ID_SLOW, CONF_GCLK_SERCOM1_SLOW_SRC);
}

void I2C_1_init(void)
{
	I2C_1_CLOCK_init();
	i2c_s_async_init(&I2C_1, SERCOM1, SERCOM1_i2c_s_buffer, SERCOM1_I2CS_BUFFER_SIZE);
	I2C_1_PORT_init();
}

/**
 * \brief Timer initialization function
 *
 * Enables Timer peripheral, clocks and initializes Timer driver
 */
static void TIMER_0_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBA, RTC);
	_gclk_enable_channel(RTC_GCLK_ID, CONF_GCLK_RTC_SRC);
	timer_init(&TIMER_0, RTC, _rtc_get_timer());
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA02

	// Disable digital pin circuitry
	gpio_set_pin_direction(CURRENT, GPIO_DIRECTION_OFF);

	gpio_set_pin_function(CURRENT, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA03

	// Disable digital pin circuitry
	gpio_set_pin_direction(EXT_POWER_PLUGGED, GPIO_DIRECTION_OFF);

	gpio_set_pin_function(EXT_POWER_PLUGGED, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA04

	gpio_set_pin_level(USER1,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   true);

	// Set pin direction to output
	gpio_set_pin_direction(USER1, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(USER1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA05

	gpio_set_pin_level(USER2,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   true);

	// Set pin direction to output
	gpio_set_pin_direction(USER2, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(USER2, GPIO_PIN_FUNCTION_OFF);
// GPIO on PA10

// Set pin direction to input
gpio_set_pin_direction(eSTOP, GPIO_DIRECTION_IN);

gpio_set_pin_pull_mode(eSTOP,
// <y> Pull configuration
// <id> pad_pull_config
// <GPIO_PULL_OFF"> Off
// <GPIO_PULL_UP"> Pull-up
// <GPIO_PULL_DOWN"> Pull-down
GPIO_PULL_UP);

gpio_set_pin_function(eSTOP, GPIO_PIN_FUNCTION_OFF);
	// GPIO on PA11

	// Set pin direction to input
	gpio_set_pin_direction(nALERT, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(nALERT,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(nALERT, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA14

	// Set pin direction to input
	gpio_set_pin_direction(I2C_PW_FAULT, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(I2C_PW_FAULT,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(I2C_PW_FAULT, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA15

	gpio_set_pin_level(I2C_PW_EN,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(I2C_PW_EN, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(I2C_PW_EN, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA18

	gpio_set_pin_level(ENABLE_VBAT_POWER,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ENABLE_VBAT_POWER, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ENABLE_VBAT_POWER, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA19

	gpio_set_pin_level(ENABLE_5V_POWER,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(ENABLE_5V_POWER, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(ENABLE_5V_POWER, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA22

	gpio_set_pin_level(EN_12V,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(EN_12V, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(EN_12V, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA23

	gpio_set_pin_level(EN_5V,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(EN_5V, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(EN_5V, GPIO_PIN_FUNCTION_OFF);

	I2C_0_init();

	I2C_1_init();

	TIMER_0_init();
}
