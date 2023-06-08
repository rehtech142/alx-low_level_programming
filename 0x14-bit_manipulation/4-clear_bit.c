#include "main.h"

/**
 * clear_bit - sets the value of a provided bit to 0
 * @n: points to the number to change
 * @index: the index of the bit to clear
 *
 * Return: 1 for true, -1 for false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
