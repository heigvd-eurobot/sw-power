/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

static struct io_descriptor *io;

static void I2C_0_rx_complete(const struct i2c_s_async_descriptor *const descr)
{
	uint8_t c;

	io_read(io, &c, 1);
}

void I2C_0_example(void)
{
	i2c_s_async_get_io_descriptor(&I2C_0, &io);
	i2c_s_async_register_callback(&I2C_0, I2C_S_RX_COMPLETE, I2C_0_rx_complete);
	i2c_s_async_enable(&I2C_0);
}

static struct io_descriptor *io;

static void I2C_1_rx_complete(const struct i2c_s_async_descriptor *const descr)
{
	uint8_t c;

	io_read(io, &c, 1);
}

void I2C_1_example(void)
{
	i2c_s_async_get_io_descriptor(&I2C_1, &io);
	i2c_s_async_register_callback(&I2C_1, I2C_S_RX_COMPLETE, I2C_1_rx_complete);
	i2c_s_async_enable(&I2C_1);
}

static struct timer_task TIMER_0_task1, TIMER_0_task2;
/**
 * Example of using TIMER_0.
 */
static void TIMER_0_task1_cb(const struct timer_task *const timer_task)
{
}

static void TIMER_0_task2_cb(const struct timer_task *const timer_task)
{
}

void TIMER_0_example(void)
{
	TIMER_0_task1.interval = 100;
	TIMER_0_task1.cb       = TIMER_0_task1_cb;
	TIMER_0_task1.mode     = TIMER_TASK_REPEAT;
	TIMER_0_task2.interval = 200;
	TIMER_0_task2.cb       = TIMER_0_task2_cb;
	TIMER_0_task2.mode     = TIMER_TASK_REPEAT;

	timer_add_task(&TIMER_0, &TIMER_0_task1);
	timer_add_task(&TIMER_0, &TIMER_0_task2);
	timer_start(&TIMER_0);
}
