#include <stdio.h>
#include "main.h"
/*
 * description - mini function
 * to check if alphabets are lower
 * case
 */
/**
 * _islower - function checks chars
 * to see if its lower case
 *
 * @c: char parameter
 *
 * Return: 1 if char is lower
 * 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
