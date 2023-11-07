#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
        return NULL;

    newDog->name = malloc(sizeof(char) * (strlen(name) + 1));
    if (newDog->name == NULL)
    {
        free(newDog);
        return NULL;
    }
    strcpy(newDog->name, name);

    newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
    if (newDog->owner == NULL)
    {
        free(newDog->name);
        free(newDog);
        return NULL;
    }
    strcpy(newDog->owner, owner);

    newDog->age = age;

    return newDog;
}

