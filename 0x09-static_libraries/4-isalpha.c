#include <stdio.h>
#include "main.h"
/*
 * description - checks if
 * character is alphabet
 */
/**
 * _isalpha - checks if char is a letter
 * or not
 *
 * @c: char parameter
 *
 * Return: 1 if true
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
