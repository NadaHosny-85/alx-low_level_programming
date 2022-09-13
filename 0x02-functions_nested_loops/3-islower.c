#include <ctype.h>
#include "main.h"
/*
 * Description: returns 0 or 1
 * if alphabet is lower case
 */
/**
 * _islower - checks if char is lower case
 * @c : character parameter
 *
 * Return: 1 if lower case
 * 0 if not
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
