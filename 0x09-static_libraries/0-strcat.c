#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @srcincludung the terminat
 * @dest: A pointer to the string pointed to by @dest
 * @src: The source string to be concatenated upon.
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
