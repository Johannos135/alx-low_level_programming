#include <stdio.h>
/**
 * main - Print all alphabet letters except 'q' & 'e'
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar('\n');

	return (0);
}
