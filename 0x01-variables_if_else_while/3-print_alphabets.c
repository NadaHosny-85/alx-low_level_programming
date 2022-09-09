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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch_l);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch_u);
	}
	putchar('\n');
	return (0);
}
