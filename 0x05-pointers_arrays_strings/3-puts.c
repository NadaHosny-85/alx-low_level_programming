#include "main.h"
#include <stdio.h>

/*
 * description - program prints string
 */
/**
 * _puts - function prints string
 * without puts
 *
 * @str: parameter to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		putchar(str);
		str++;
	}
}
