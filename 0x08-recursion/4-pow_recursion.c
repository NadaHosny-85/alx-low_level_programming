#include <stdio.h>
#include "main.h"

/*
 * description - program returns calculation of
 * num to power of another
 */
/**
 * _pow_recursion - function returns num to power of
 * another using recursion
 *
 * @x: base number
 * @y: power
 *
 * Return: calculation of int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		y--;
		return (_pow_recursion(x, y) * x);
	}
}
