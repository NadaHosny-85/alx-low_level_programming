#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * description - program revereses a string
 */
/**
 * rev_string - function reverses a
 * string
 *
 * @s: first parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l;

	int i;

	int j;

	l = strlen(s);

	char *end_s;

	char tmp;

	end_s = s;

	for (i = 0; i < l - 1; i++)
	{
		end_s++;
	}
	for (j = 0; j < l / 2; j++)
	{
		tmp = *end_s;
		*end_s = *s;
		*s = tmp;

		s++;
		end_s--;
	}
}
