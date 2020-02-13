#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */

void more_numbers(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	while (a < 10)
	{
		c = 0;
		d = 0;
		while (b <= 14)
		{
			c = b / 10;
			d = b % 10;
			if (b <= 9)
				_putchar(b + '0');
			if (b > 9)
			{
				_putchar(d + '0');
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}

