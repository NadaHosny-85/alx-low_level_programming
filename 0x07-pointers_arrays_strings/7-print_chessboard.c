#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * a chess board with 2D arrays
 */
/**
 * print_chessboard - function prints a 2D
 * chess board
 *
 * @a: first parameter which is 2D array
 *
 * Return: coid
 */
void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
