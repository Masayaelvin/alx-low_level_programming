#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: the string we look through
 * @c: the character we look for
 *
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
