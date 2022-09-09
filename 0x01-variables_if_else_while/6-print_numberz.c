#include <stdio.h>
/*
 * Description: this program prints
 * digits using putchar
 */
/**
 * main - function contains print and loop
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
