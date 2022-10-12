#include <stdio.h>
#include "function_pointers.h"
/*
 * description - program prints
 * its name
 */
/**
 * print_name - function prints name
 * using function pointer
 *
 * @name: first parameter
 * @f: second pointer parameter
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
