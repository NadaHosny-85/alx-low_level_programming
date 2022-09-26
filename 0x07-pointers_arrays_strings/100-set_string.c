#include <stdio.h>
#include "main.h"

/*
 * description - program sets a pointer
 * to a char
 */
/**
 * set_string - function sets
 * a pointer to a char
 *
 * @s: first parameter
 * @to: second parameter
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
