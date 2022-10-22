#include "main.h"
/**
 * print_number - print numbers
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < o)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
