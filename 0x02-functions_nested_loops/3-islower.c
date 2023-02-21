#include "main.h"
/**
 * _islower - Checks for lower characters
 * @c: Returns 1 if c is lowercase otherwise 0
 *
 * Return: 1 if lowecase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
