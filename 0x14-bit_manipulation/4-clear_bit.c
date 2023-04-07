#include "main.h"

/**
 * clear_bit - sets bit to 0
 * @n: a pointer
 * @index: index of the bit
 * Return: -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

