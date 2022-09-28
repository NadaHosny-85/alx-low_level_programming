#include <stdio.h>
#include "main.h"
/*
 * description - program prints factorial of num
 */
/**
 * factorial - funcion returns factorial
 * of a num using recursion
 *
 * @n: first parameter
 *
 * Return: factorial of the param
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
