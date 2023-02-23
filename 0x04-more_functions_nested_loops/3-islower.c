#include "main.h"

/**
 * _islower - function that prints lower case
 * @c: parameter
 * Return: 1 if lower case
 * and 0 if upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
