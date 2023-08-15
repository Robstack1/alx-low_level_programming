#include "main.h"
/**
 * print_last_digit - get the last digit of a number
 *
 * @c: an integer input
 *
 * Description: print with _putchar delared
 *
 * Return: last digit of c
 *
 */
int print_last_digit(int c)
{
	int i;

	if (c < 0)
	{
		i = -1 * (c % 10);
	}
	else
	{
		i = c % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
