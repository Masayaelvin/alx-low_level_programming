#ifndef DOG_H
#define DOG_H

/**
 * struct dog - gives dog details.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: always 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
