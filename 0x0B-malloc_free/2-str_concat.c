#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program returns
 * space allocated for 2 strings
 * concatenated
 */
/**
 * *str_concat - function concatenates
 * two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure or
 * concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat = NULL;

	unsigned int i = 0;

	int j = 0;

	int size1 = 0;

	int size2 = 0;

	if (s1 == NULL)
	{s1 = ""; }
	if (s2 == NULL)
	{s2 = ""; }
	while (s1[size1] != '\0')
	{size1++; }
	while (s2[size2] != '\0')
	{size2++; }
	str_concat = malloc(sizeof(char) * (size1 + size2) + 1);
	if (str_concat == NULL)
	{return (NULL); }
	while (s1[i] != '\0')
	{str_concat[i] = s1[i];
		i++; }
	while (s2[j] != '\0')
	{str_concat[i] = s2[j];
		j++;
		i++; }
	return (str_concat);
}
