#include "main.h"
/*
 * description - program counts
 * string length
 */
/**
 * _strlen - function counts
 * string chars without stlen
 *
 * @s : string parameter
 *
 * Return: count of chars
 */
int _strlen(char *s)
{
	int str_count = 0;

	while (*s != '\0')
	{
		str_count++;
		s++;
	}
	return (str_count);
}
