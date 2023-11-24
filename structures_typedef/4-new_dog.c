#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *new_dog;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(nlen * sizeof(new_dog->name));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(olen * sizeof(new_dog->owner));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
