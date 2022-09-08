#include <stdio.h>
/*
 * Description: This program prints out different sizes of
 * data types based on computer its run on
 */
/**
 * main - function contains the printf statements along with the
 * sizeof function which fetches the sizes of data types
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %2d byte(s)", sizeof(char));
	printf("Size of an int: %2d byte(s)", sizeof(int));
	printf("Size of a long int: %2d byte(s)", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)", sizeof(long long int));
	printf("Size of a float: %2d byte(s)", sizeof(float));
	return (0);
}
