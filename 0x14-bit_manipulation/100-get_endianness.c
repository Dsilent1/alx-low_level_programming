#include "main.h"

/**
 * get_endianness - Checks if the machine is little or is big endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *) &b;

	return (*c);
}
