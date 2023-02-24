#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: integer to check
 *
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
