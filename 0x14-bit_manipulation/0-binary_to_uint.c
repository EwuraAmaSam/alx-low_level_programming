#include "main.h"

/**
 * binary_to_unit - converts binary to integer
 * @b: pointer to a string
 * Return: a number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		num += (*b - '0');
	}

	return (num);
}
