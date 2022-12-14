#include <stdio.h>

/*
 * description - prints first 50 numbers of fibonacci
 */
/**
 * main - contains fibonacci print
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	long int fibo_1 = 1;

	long int fibo_2 = 1;

	long int next_fibo = fibo_1 + fibo_2;

	printf("%ld, %ld, ", fibo_2, next_fibo);
	for (i = 3; i <= 50; i++)
	{
		fibo_1 = fibo_2;

		fibo_2 = next_fibo;

		next_fibo = fibo_1 + fibo_2;

		if (i == 50)
		{
			printf("%ld\n", next_fibo);
		}
		else
		{
			printf("%ld, ", next_fibo);
		}
	}
	return (0);
}
