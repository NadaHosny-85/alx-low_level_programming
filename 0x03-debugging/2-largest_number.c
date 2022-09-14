#include "main.h"

/*
 * description - returns
 * largest number of 3
 */
/**
 * largest_number - returns largest num
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest num
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}
