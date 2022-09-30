#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * description - program
 * prints its name
 */
/**
 * main - function prints its
 * name
 *
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
