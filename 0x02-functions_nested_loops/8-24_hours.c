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
		if (hr >= 0 && hr <= 9)
		{
			putchar('0');
			putchar(hr);
			putchar(':');
		}
		else
		{
			putchar(hr);
			putchar(':');
		}
		for (min = 0; min < 60; min++)
		{
			if (min >= 0 && min <= 9)
			{
				putchar('0');
				putchar(min);
				putchar('\n');
			}
			else
			{
				putchar(min);
				putchar('\n');
			}
		}
	}
}
