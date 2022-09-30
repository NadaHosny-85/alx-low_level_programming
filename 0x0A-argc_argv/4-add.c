#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program prints
 * addition of numbers passed
 */
/**
 * main - function prints add
 * of nums passed
 *
 * @argc: first
 * @argv: second
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	int res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= 0 && argv[i][j] <= 9))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}


