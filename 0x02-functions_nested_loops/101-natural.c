#include <stdio.h>
/*
 * description - prints sum of nums
 * divisable by 3 and 5
 */
/**
 * main - function prints sum of
 * multiples of 3 and 5
 *
 * Return: doesnt return anything
 */
void main(void)
{
	int i;

	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
}
