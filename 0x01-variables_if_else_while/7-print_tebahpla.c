#include <stdio.h>
/**
 * main - Print alphabets in the reverse order
 * Return: Always 0 (success)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');

	return (0);
}
