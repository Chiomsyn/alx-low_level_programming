#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct with name "dog" that saves its name,
 * its age and its owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
