#include <stdio.h>
/**
 * main - print alphabet in Capital and lower cases
 *
 * Return: (0)
 *
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper);
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
