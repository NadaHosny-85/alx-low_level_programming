#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * descrption - program prints string reversed
 */
/**
 * print_rev - function prints string
 * in a reversed way
 *
 * @s: parameter to be printed reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	int i;

	char *begin_s;

	char *end_s;

	char c;

	l = strlen(s);
	begin_s = s;

