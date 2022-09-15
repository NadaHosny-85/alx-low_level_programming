#include "main.h"
/*
 * the program checks for uppercase chars
 * and return 1 or 0
 */
/**
 * _isupper - function checks character
 *
 * @c : parameter which is char
 *
 * Return: 1 if its upper
 * and 0 if not
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
