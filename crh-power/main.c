#include <atmel_start.h>

#include "examples/driver_examples.h"



int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	
	TIMER_0_example();
	gpio_set_pin_level(EN_5V, true);
	gpio_set_pin_level(EN_12V, true);
	
	/* Replace with your application code */
	while (1) {
	}
}
