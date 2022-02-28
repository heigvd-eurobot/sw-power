#include <atmel_start.h>

#include "examples/driver_examples.h"



int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	//io_read_t(0xAD);
	TIMER_0_example();
	gpio_set_pin_level(EN_5V, true);
	gpio_set_pin_level(EN_12V, true);
	gpio_set_pin_level(ENABLE_5V_POWER, true);
	gpio_set_pin_level(ENABLE_VBAT_POWER, true);
	
	I2C_0_init();
	I2C_0_example();
	I2C_1_init();
	I2C_1_example();
	
	
	
	
	/* Replace with your application code */
	while (1) {
	}
}
