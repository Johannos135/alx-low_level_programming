#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to check
 *
 * Return: 1 if c is a letter, lower or upper otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
