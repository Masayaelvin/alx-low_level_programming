#include "main.h"

/*
 * _memcopy - copiess n bytes from source to destination
 * @dest: destination
 * @src : source
 * @n: how much we copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destiny = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destiny[index] = source[index];

	return (dest)
}
