#include <stdio.h>
#include "main.h"
/*
 * description - program checks
 * for string if its a palindrome
 * or not
 */
/**
 * str_len - function finds length
 * of string using recursion
 *
 * @s: string parameter
 *
 * Return: int (length)
 */
int str_len(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (str_len(s) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * palin_helper - function checks for
 * palindrome conditions using
 * recursion
 *
 * @s: first str parameter
 * @l: second parameter
 * @x: third parameter
 *
 * Return: 1 if checks are okay
 * 0 if not
 */
int palin_helper(char *s, int l, int x)
{
	if (l == x)
	{
		return (1);
	}
	else if (l - x == 1)
	{
		if (s[l] == s[x])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (s[l] != s[x])
	{
		return (0);
	}
	else
	{
		l--;
		x++;
		return (palin_helper(s, l, x));
	}
}

/**
 * is_palindrome - function checks for
 * string is palindrome or not
 *
 * @s: first parameter
 *
 * Return: 1 if its palindrome
 * 0 if not
 */
int is_palindrome(char *s)
{
	return (palin_helper(s, str_len(s) - 1, 0));
}
