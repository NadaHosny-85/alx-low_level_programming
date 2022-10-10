#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to define
 * some of properties of a dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
