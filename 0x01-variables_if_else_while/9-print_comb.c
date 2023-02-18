#include <stdio.h>
/**
 * main - Print numbers between 0 and 10 with comma separator
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
