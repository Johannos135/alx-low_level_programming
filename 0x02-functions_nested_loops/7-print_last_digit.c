#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	_putchar(digit + '0');

	return (digit);
}
