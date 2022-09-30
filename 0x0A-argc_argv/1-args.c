#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * number of arguments passed to it
 */
/**
 * main - function prints no of args
 *
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
