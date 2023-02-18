#include <stdio.h>
/**
 * main - Print digits from 0 to 10 using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
