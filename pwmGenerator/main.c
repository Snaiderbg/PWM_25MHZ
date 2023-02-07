#include <atmel_start.h>

#define PWM_FREQUENCY 25000000
#define PWM_PERIOD PWM_FREQUENCY/2
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	pwm_enable(&PWM_0);

	/* Replace with your application code */
	while (1) {
	}
}
