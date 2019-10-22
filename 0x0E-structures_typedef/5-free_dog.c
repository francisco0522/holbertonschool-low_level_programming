#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - frees a 2 dimensional grid
 * @dog_t: int grid
 *
 * Return: arr
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
