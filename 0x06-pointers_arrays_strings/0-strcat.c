#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 *
 * Return: returns dest.
 */
char *_strcat(char *dest, char *src)
{
	int length, count;

	length = 0;

	while (*(dest + length) != '\0')
		length++;

	for (count = 0; *(src + count) != '\0'; count++, length++)
		*(dest + length) = *(src + count);

	*dest[length] = '\0';

	return (dest);
}

