#include <stdio.h>
#include "main.h"

/*
 * description - program checks
 * if character if upper case
 */
/**
 * _isupper - function checks
 * if char is upper case or not
 *
 * @c: char parameter
 *
 * Return: 1 if true
 * 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
