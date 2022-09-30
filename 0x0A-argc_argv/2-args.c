#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * all arguments of main
 */
/**
 * main - function prints all
 * arguments of main
 *
 * @argc: first
 * @argv: second
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void)argc;
		printf("%s\n", argv[i]);
	}
	return (0);
}
