#include "main.h"

/**
 * get_bit - Value of a bit at an index in a decimal number should be returned
 * @n: A number to search
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 50)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
