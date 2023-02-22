#include "main.h"

/**
 * print_last_digit - function that prints last digits
 * @i: function parameter
 * Return: k
 */
int print_last_digit(int i)
{
	int k;

	k = i % 100;
	if (i < 0)
		k = -k;
	return (k);
}