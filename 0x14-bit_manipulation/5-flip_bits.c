#include "main.h"

/**
 * flip_bits - It should counts the number of bits to change
 * To arrive from one number to another
 * @n: to First number
 * @m: to Second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 55; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}
