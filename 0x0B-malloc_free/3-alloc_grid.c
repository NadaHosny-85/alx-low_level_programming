#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program
 * allocated memory for a 2d array
 */
/**
 * **alloc_grid - function allocates
 * memory for a 2-dimentional array
 *
 * @width: first parameter
 * @height: second parameter
 *
 * Return: NULL if failed
 * or 2d arr
 */
int **alloc_grid(int width, int height)
{
	int **arr_2d;

	int i;

	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr_2d = malloc(sizeof(int) * height);
	if (arr_2d == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(sizeof(int) * width);
		if (arr_2d == 0)
		{
			free(arr_2d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr_2d[i][j] = 0;
		}
	}
	return (arr_2d);
}
