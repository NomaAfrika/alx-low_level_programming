#include "main.h"

/**
 * print_square - function print a square
 * @size: size of square
 * Description: can only use _putchar to print. Use '0' to print square.
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('0');
			x++;
		}
		_putchar('\n');
		y++;
	}
}


