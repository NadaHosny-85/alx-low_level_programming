#include "main.h"

/*
 * description - program returns remaing day of tear
 */
/**
 * print_remaining_days - has 3 params
 * and returns remaining no of days in a year
 *
 * @month: first param
 * @day: second param
 * @year: third param
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int day_converted;

	day converted = convert_day(month, day);

	if (year % 4 == 0)
	{
		if ((month == 2 && day > 28) || (month > 2))
		{
			day_converted = day_converted + 1;
		}
		printf("Day of the year: %d\n", day_converted);
		printf("Remaining days: %d\n", 366 - day_converted);
	}
	else if ((year % 4 != 0) && (month == 2 && day == 60))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", day_converted);
		printf("Remaining days: %d\n", 365 - day_converted);
	}
}
