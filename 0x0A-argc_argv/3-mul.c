#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * multiplication
 */
/**
 * main - function prints
 * multiplication of two ints
 * passed as arguments
 *
 * @argc: first
 * @argv: second
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int res;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = argv[1] * argv[2];
		(void)argc;
		printf("%d\n", res);
	}
	return (0);
}
