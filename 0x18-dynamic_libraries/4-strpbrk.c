#include "main.h"
/**
 * _strpbrk - prints the consecutive caracters of sl that are in s2
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			for (k = 0; accept[k]; k++)
				return (s);
		}
		s++;
	}
	return ('\0');
}
