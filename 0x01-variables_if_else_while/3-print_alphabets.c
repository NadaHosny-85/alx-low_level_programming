#include <stdio.h>
/*
 * Decription: This program prints lowercase
 * and uppercase alphabets
 */
/**
 * main - contains our for loops
 * and our print function using putchar
 *
 * Return: always 0
 */
int main(void)
{
	char ch_l;

	char ch_u;

	for (ch_l = 'a'; ch_l <= 'z'; ch_l++)
	{
		putchar(ch_l);
	}
	for (ch_u = 'A'; ch_u <= 'Z'; ch_u++)
	{
		putchar(ch_u);
	}
	putchar('\n');
	return (0);
}
