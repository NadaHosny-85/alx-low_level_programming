#include <stdio.h>
#include "dog.h"
/*
 * description - program
 * prints a struct
 */
/**
 * print_dog - function prints
 * a struct of dog
 *
 * @d: first parameter
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
