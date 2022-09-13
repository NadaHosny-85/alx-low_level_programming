#include "main.h"
/*
 *Description: checks if alphabet
 *is a lower case letter or
 *upper case letter
 */
/**
 * _isalpha - checks if char is a letter
 * lower or upper case
 *
 * @c: takes one parameter
 *
 * Return: 1 if letter
 * 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
