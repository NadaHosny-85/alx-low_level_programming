#include <stdio.h>
/*
 * Description: this program prints alphabets
 * reversed
 */
/**
 * main - the function has the loop
 * which prints in reverse order
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
