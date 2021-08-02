#include "dog.h"
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int size;

	if (name == NULL || owner == NULL)
		return (NULL);
	/* allocate memory for the new dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (size = 0; name[size] != '\0'; size++)
		;
	size++;

	new_dog->name = malloc(size * sizeof(char));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);

	for (size = 0; name[size] != '\0'; size++)
		;
	size++;

	new_dog->owner = malloc(size * sizeof(char));
	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
/**
 * _strcpy - copies string at src to buffer pointed to by dest
 * @dest: address to string desteny
 * @src: address to string source
 *
 * Return: dest value to this pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}

		i++;
	}

	return (dest);

}
