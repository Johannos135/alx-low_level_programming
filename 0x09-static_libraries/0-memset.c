#include "main.h"
/**
 * _memset - fill the block of memory with a specific value
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
