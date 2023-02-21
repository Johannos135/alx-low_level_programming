#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count, alpha;

	count = 0;

	while (count < 10)
	{
		for (alpha = 97; alpha <= 122; alpha++)
			_putchar(alpha);

		_putchar('\n');

		count++;
	}
}
