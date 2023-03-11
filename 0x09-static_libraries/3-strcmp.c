#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcmp - Compares poiners to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: if str1 < str2, the difference of the first unmatchedd char
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
