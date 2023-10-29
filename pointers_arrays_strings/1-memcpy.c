#include "main.h"

/**
 * _strchr - function to locate a character
 * @s: array strings
 * @c: character that needs to be found
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
