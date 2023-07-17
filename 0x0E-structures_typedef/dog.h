#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - contains elements
 * @name: name
 * @age: integer to age
 * @owner: persona
 * Description: longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
