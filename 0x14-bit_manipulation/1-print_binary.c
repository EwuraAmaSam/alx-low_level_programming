#include "main.h":

/**
 * print_binary - prints binary representation
 * @num: what to print
 * Return: void 
 */

void print_binary(unsigned long int n)
{
	if (num > 1)
		print_binary(num >> 1)
	_putchar((num & 1) + '0');
}

