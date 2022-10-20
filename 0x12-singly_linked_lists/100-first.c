#include <stdio.h>

void before_main(void) __attribute__((constructor));
/*
 * description - program executes this function
 * before the main
 * added the constructor
 */
/**
 * before_main - function executes before
 * main to print a sentence
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
