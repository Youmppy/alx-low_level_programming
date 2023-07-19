#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and initializes its members
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_len = 0, owner_len = 0;

    while (name[name_len])
        name_len++;
    while (owner[owner_len])
        owner_len++;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_copy = malloc(sizeof(char) * (name_len + 1));
    owner_copy = malloc(sizeof(char) * (owner_len + 1));

    if (name_copy == NULL || owner_copy == NULL)
    {
        free(new_dog);
        free(name_copy);
        free(owner_copy);
        return (NULL);
    }

    for (int i = 0; i <= name_len; i++)
        name_copy[i] = name[i];

    for (int i = 0; i <= owner_len; i++)
        owner_copy[i] = owner[i];

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
