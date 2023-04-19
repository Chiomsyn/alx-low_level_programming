#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializes a variable of type struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: typedef struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	int i, tname, towner;

	the_dog = malloc(sizeof(*the_dog));
	if (the_dog == NULL || !(name) || !(owner))
	{
		free(the_dog);
		return (NULL);
	}

	if (!(the_dog->name) || !(the_dog->owner))
	{
		free(the_dog);
		return (NULL);
	}

	for (tname = 0; name[tname]; tname++)
		;

	for (towner = 0; owner[towner]; towner++)
		;

	the_dog->name = malloc(tname + 1);
	the_dog->owner = malloc(towner + 1);

	for (i = 0; i < tname; i++)
		the_dog->name[i] = name[i];
	the_dog->name[i] = '\0';

	the_dog->age = age;

	for (i = 0; i < towner; i++)
	       the_dog->owner[i] = owner[i];
	the_dog->owner[i] = '\0';

	return (the_dog);
}	

