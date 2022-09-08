#include<stdio.h>
#include<unistd.h>
/*
 * This file prints without usinf printf or puts functions
 */
/**
 * main - has the print function
 *
 * Return: 1
 */
int main(void)
{
	const char *str="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1,str,strlen(str));
	Return (1);
}
