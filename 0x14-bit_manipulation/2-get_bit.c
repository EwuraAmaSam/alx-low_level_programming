#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number
 * @index: index of the bit
 * Return: -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

