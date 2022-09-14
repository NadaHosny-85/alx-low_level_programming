#include <stdio.h>
#include "main.h"
/*
 * description : program prints
 * minutes of a day
 */
/**
 * jack_bauer - function which loops through every hour
 * and every minute of the day to print it
 *
 * Return: doesnt have a return statement
 */
void jack_bauer(void)
{
	int hr;

	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((hr / 10) + '0');
			putchar((hr % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}
}
