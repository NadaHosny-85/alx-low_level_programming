#include <stdio.h>
/*
 * Description: this program prints
 * lowercase alphabets except q and e
 */
/**
 * main - the function has the loops
 * and the exceptions
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
