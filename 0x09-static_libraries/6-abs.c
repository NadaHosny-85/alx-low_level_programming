#include <stdio.h>
#include "main.h"

/*
 * description - program
 * computes abs value
 * of int
 */
/**
 * _abs - function returns
 * abs value of int
 *
 * @n: int parameter
 *
 * Return: abs value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
