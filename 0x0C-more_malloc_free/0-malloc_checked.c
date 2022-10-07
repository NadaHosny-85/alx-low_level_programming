#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program allocates
 * memory using malloc
 */
/**
 * *malloc_checked - function checks
 * memoru allocated
 *
 * @b: first parameter
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == null)
	{
		exit(98);
	}
	return (i);
}
