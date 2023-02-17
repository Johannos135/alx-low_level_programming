#include <stdio.h>
/**
 * main - Print alphabets v2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char let[52] = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

	for (i = 0; i < 52; i++)
		putchar(let[i]);
	putchar('\n');

	return (0);
}
