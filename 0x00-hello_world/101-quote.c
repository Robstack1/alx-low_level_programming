#include <stdio.h>
#include <unistd.h>
/**
 * main - printing without printf and puts
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\n" - "Dora korpar, 2015-10-19\n", );
	return (1);
}
