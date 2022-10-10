#include <stdio.h>
/*
 * description - program
 * prints file name it was compiled from
 */
/**
 * main - function prints the name of the file
 * from where it was compiled
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __file__);
	return (0);
}
