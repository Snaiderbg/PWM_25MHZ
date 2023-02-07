/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <hal_init.h>
#include <hpl_pmc.h>
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hpl_pwm_base.h>

struct pwm_descriptor PWM_0;

void PWM_0_PORT_init(void)
{

	gpio_set_pin_function(PA0, MUX_PA0A_PWM0_PWMH0);

	gpio_set_pin_function(PB1, MUX_PB1A_PWM0_PWMH1);

	gpio_set_pin_function(PA19, MUX_PA19B_PWM0_PWML0);

	gpio_set_pin_function(PB12, MUX_PB12A_PWM0_PWML1);
}

void PWM_0_CLOCK_init(void)
{
	_pmc_enable_periph_clock(ID_PWM0);
}

void PWM_0_init(void)
{
	PWM_0_CLOCK_init();
	PWM_0_PORT_init();
	pwm_init(&PWM_0, PWM0, _pwm_get_pwm());
}

void system_init(void)
{
	init_mcu();

	/* Disable Watchdog */
	hri_wdt_set_MR_WDDIS_bit(WDT);

	PWM_0_init();
}
