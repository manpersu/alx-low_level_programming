#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: returns a dog object on success and NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int i, name_size, owner_size;

	dog_new = malloc(sizeof(*dog_new));
	if (p_dog == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	for (name_size = 0; name[name_size]; name_size++)
	{}

	for (owner_size = 0; owner[owner_size]; owner_size++)
	{}

	(*dog_new).name = malloc(name_size + 1);
	(*dog_new).owner = malloc(owner_size + 1);

	if (!((*dog_new).name) || !((*dog_new).owner))
	{
		free(dog_new->owner);
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i < name_size; i++)
		(*dog_new).name[i] = name[i];
	(*dog_new).name[i] = '\0';

	(*dog_new).age = age;

	for (i = 0; i < lowner; i++)
		(*dog_new).owner[i] = owner[i];
	(*dog_new).owner[i] = '\0';

	return (dog_new);
}
