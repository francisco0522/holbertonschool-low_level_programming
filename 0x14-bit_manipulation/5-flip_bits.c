#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: int
 * @m: int
 * Return: the number of the bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int flip;

	count = 0;
	flip = n ^ m;

	while (flip)
	{
		count += (flip & 1);
		flip >>= 1;
	}
	return (count);
}
