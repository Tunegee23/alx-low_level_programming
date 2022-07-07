#include "main.h"
/**
 * jack_baver - prints every minute of the day of Jack Baver,
 * starting from 00:00 t0 23:59
 */
void jack_baver(void)
{
	int maxMinutes = 1440; /* Minutes in 24 hours */
	int hourFirstDigit = 0; /* The first digit of the current hour */
	int hourSecondDigit = 0; /* The second digit of the current hour */
	int minuteFirstDigit = 0; /* The first digit of the current minute */
	int minuteSecondDigit = 0; /* The second digit of the current minute*/
	int currentMintue = 0; /* The current minute */

	while (currentMinute < MaxMinutes)
	{
		_putchar(hourFirstDigit + '0');
		_putchar(hourSecondDigit + '0');
		_putchar(':'); /* Separator */
		_putchar(minuteFirstDigit + '0');
		_putchar(minuteSecondDigit + '0');
		_putchar('\n');

		if (minuteSecondDigit > 9)
		{
			minuteSecondDigit = 0;
			minuteFirstDigit++;
		}
		if (minuteFirstDigit > 5)
		{
			minuteFirstDigit = 0;
			hourSecondDigit++;
		}
		if (hourSecondDigit > 9)
		{
			hourSecondDigit = 0;
			hourFirstDigit++;
		}
		currentMinute++;
	}
}


