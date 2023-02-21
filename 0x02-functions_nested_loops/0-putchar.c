#include "main.h"
/**
 * main - Print _putchar followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int _size, count;

	_size = sizeof(str) / sizeof(int);

	for (count = 0; count < _size; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');

	return (0);
}
