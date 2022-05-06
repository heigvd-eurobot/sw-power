#include <atmel_start.h>

#include "examples/driver_examples.h"

#define DATALENGTH 32

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	// io_read_t(0xAD);
	TIMER_0_example();
	gpio_set_pin_level(EN_5V, true);
	gpio_set_pin_level(EN_12V, true);
	gpio_set_pin_level(ENABLE_5V_POWER, true);
	gpio_set_pin_level(ENABLE_VBAT_POWER, true);

	I2C_0_init();
	I2C_0_example();
	i2c_s_async_enable(&I2C_0);

	I2C_1_init();
	I2C_1_example();
	i2c_s_async_enable(&I2C_1);

	/* Replace with your application code */

	// sending smth to pi via i2c, if pi doesn't respond, shut it off
	while (1)
	{
		// battery voltage
		/*if (_i2c_s_sync_read_byte(&I2C_0) == 0x03) // only for testing -> later modify to look
		{
			
			_i2c_s_async_write_byte(&I2C_0, 0xAD);
			gpio_set_pin_level(EN_5V,false);
			// if (!_i2c_s_async_write_byte(I2C_1, 0x00)) // I2C_1
			// {

			// 	gpio_set_pin_level(EN_5V, false);
			// }
			// else if (!gpio_get_pin_level(EN_5V))
			// {

			// 	gpio_set_pin_level(EN_5V, true);
			// }
		}*/
		if (!gpio_get_pin_level(eSTOP))
		{
			
			gpio_set_pin_level(ENABLE_5V_POWER, false);
			gpio_set_pin_level(ENABLE_VBAT_POWER, false);
			
			//write to PI via I2C to shut down Techno soft
		}  
			/*if (_i2c_s_sync_read_byte(&I2C_1) == 0x01) // only for testing -> later modify to look
			{
				gpio_set_pin_level(EN_5V, false);
				// if (!_i2c_s_async_write_byte(I2C_1, 0x00)) // I2C_1
				// {

				// 	gpio_set_pin_level(EN_5V, false);
				// }
				// else if (!gpio_get_pin_level(EN_5V))
				// {

				// 	gpio_set_pin_level(EN_5V, true);
				// }
			}
		
	}
	// reading voltage/current outputs + flags and errors from LTC via i2c

	// reading battery capacity and voltage/current output
	// 0x0F - remaining capacity
	// 0x10 - full capacity
	// battery percentage = (remaining capacity / full capacity) * 100*/
	}
}
