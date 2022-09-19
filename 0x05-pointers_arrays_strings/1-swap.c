#include "main.h"
/*
 * description - program swaps to numbers
 */
/**
 * swap_int - function swaps two
 * number
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;

}
