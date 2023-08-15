#include "main.h"
/**
 * times_table - a function that prints the 9
 *times table
 *
 * Description: it prints it followed by , and 2 spaces
 *
 */
void times_table(void)
{
	int s, t, u;

	for (s = 0; s <= 9; s++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (t = 0; t < 9; t++)
		{
			u = (s * t);
			if ((u / 10) > 0)
			{
				_putchar((u / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((u % 10) + '0');
			if (t < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
