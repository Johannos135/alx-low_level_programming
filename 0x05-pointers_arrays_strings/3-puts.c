#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 */
void _puts(char *str)
{
	int counter;

	counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);

		counter++;
	}
}
