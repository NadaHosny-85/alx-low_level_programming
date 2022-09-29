#include <stdio.h>
#include "main.h"

/*
 * description - program finds prime
 * number using recursion
 */
/**
 * helper_prime_number - function helps
 * is_prime to find if number is prime
 * or not using recursion
 *
 * @x: first parameter
 * @y: second parameter
 *
 * Return: 1 if num is prime
 * 0 if not
 */
int helper_prime_number(int x, int y)
{
	if (y != 1)
	{
		if (x == y)
		{
			return (1);
		}
		else if (y % x == 0 || y <= 1)
		{
			return (0);
		}
		else
		{
			x++;
			return (helper_prime_number(x, y));
		}
	}
	return (0);
}

/**
 * is_prime_number - function checks
 * if number is prime or not using
 * recursion
 *
 * @n: num to be checked
 *
 * Return: 1 if prime
 * 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	return (helper_prime_number(i, n));
}
