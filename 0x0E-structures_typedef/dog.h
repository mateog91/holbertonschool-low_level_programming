#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
