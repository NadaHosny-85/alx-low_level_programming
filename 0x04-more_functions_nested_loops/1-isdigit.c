#include "main.h"
/*
 * description - program checks
 * for digits
 */
/**
 * _isdigit - function checks
 * if the char is a digit between 0
 * and 9
 *
 * @c: first parameter
 *
 * Return: 1 if true and 0 if false
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
