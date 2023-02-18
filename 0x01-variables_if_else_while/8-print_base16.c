#include <stdio.h>
/**
 * main - Print base16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	for (num = 97; num < 103; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
