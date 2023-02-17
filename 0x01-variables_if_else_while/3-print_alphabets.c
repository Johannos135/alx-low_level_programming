#include <stdio.h>
/**
 * main - Print alphabets v2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char letters[52] = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

	for (i = 0; i < 52; i++)
		putchar(letters[i]);
	putchar('\n');

	return (0);
}
