#include <stdio.h>
#include "main.h"
/*
 * descriotion - program
 * checks for digits
 */
/**
 * _isdigit - function checks
 * if char is a digit
 *
 * @c: char parameter
 *
 * Return: 1 if true
 * 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
