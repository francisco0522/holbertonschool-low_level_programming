#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - free
 * @d: int grid
 *
 * Return: arr
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
	return (0);
}
