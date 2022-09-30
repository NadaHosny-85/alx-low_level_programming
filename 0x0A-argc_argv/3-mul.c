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

	int arg1 = 0;

	int arg2 = 0;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		res = arg1 * arg2;
		printf("%d\n", res);
	}
	return (0);
}
