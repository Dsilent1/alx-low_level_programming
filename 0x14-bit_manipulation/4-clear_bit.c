#include "main.h"

/**
 * clear_bit - Sets value of a given bit to be 0
 * @n: Pointer to the number should change
 * @index: Index of the bit to be clear
 *
 * Return: 1 if successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 59)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
