#include <stdio.h>
/*
 * description - program will execute
 * before main
 */
void before_main() __attribute__((constructor));

/**
 * before_main - function executes before
 * main to print a sentence
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
