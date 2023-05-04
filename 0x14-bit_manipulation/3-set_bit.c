#include "main.h"

/**
 * set_bit - Sets the bit at a given index to be 1
 * @n: Pointer to number that change
 * @index: The index of bit to set to 1
 *
 * Return: 1 for success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 30)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
