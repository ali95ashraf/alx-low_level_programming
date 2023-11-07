#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a structure for dog details
 * @name: pointer to a character array representing the dog's name
 * @age: float representing the age of the dog
 * @owner: pointer to a character array representing the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

