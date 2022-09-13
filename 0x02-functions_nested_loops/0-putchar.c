#include <stdio.h>
/*
 * Description: this program prints a string
 * using putchar
 */
/**
 * main - printing the string
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";

	int i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(str[i])
		}
	}
	return (0);
}
