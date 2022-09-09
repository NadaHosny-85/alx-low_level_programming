#include <stdio.h>
/*
 * Description: This project prints alphabet
 * from a to z in lower case using putchar
 */
/**
 * main - function contains the loop and print
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
