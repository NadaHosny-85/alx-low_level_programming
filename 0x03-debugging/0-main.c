#include "main.h"
/*
 * description - this file
 * contains our main function
 * which tests out positive or negative function
 */
/**
 * main - function has the tests
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(n);
	return (0);
}
