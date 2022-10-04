#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program
 * allocates concatenated str
 * of all prog
 */
/**
 * *argstostr - function concatenates
 * arguments of a program
 *
 * @ac: first parameter
 * @av: second parameter
 * Return: NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *s;

	int i = 0;

	int j;

	int x = 0;

	int y = 0;

	if (ac == 0 || av == NULL)
	{return (NULL); }

	for (j = 0; j < ac; j++)
	{
		while (av[j][x] != '\0')
		{
			x++;
			i++;
		}
		i++;
	}
	i++;
	s = malloc(sizeof(char) * i);
	if (s == 0)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x] != '\0'; x++)
		{
			s[y] = av[j][x];
			y++;
		}
		s[y] = '\n';
		y++;
	}
	s[y] = '\0';
	return (s);
}
