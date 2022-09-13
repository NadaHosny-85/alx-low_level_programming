#include "main.h"
/*
 * Description: checks if alphabet
 * if a letter lower or upper case
 */
/**
 * _isalpha: checks letter
 *
 * @c: returned from func result
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
