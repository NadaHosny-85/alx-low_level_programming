#ifndef DOG_H
#define dog_H

/**
 * dog - structure to define
 * some of properties of a dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char*owner;
} dog_t;
