#include "main.h"

/**
 * set_bit - sets a bit at a provided index to 1
 * @n: points to the number to change
 * @index: the index of the bit be to set to 1
 *
 * Return: 1 for true, -1 for false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
