#include <stdio.h>
#include "dog.h"
/*
 * description - program
 * initializes a var of type
 * struct dog
 */
/**
 * init_dog - function initializes
 * a structure of a dog
 *
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
