#include <stdio.h>

/*
 * description - program executes this function
 * before the main
 * added the constructor
 */
void before_main(void) __attribute__((constructor)); 
/**
 * before_main - function executes before
 * main to print a sentence
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,"
			"\nI bore my house upon my back!\n");
}
