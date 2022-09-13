#ifndef MAIN_H
#define MAIN_H
/**
 * PrintStr - function prints a string
 * using putchar function
 *
 * Return: always 0
 */
int PrintStr(void)
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
			putchar(str[i]);
		}
	}
	return (0);
}
#endif
