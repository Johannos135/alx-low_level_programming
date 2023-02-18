#include <stdio.h>
/**
 * main - Print base16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
		putchar(numb);

	for (numb = 97; numb < 103; numb++)
		putchar(numb);

	putchar('\n');

	return (0);
}
