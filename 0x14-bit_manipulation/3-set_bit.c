#include "main.h"

/**
 * set_bit - sets to 1
 * @n: pointer to a number
 * @index: the index of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;

	return (1);
}

