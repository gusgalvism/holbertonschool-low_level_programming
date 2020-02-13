#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
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
				_putchar(b + 48);
			if (b > 9)
			{
				_putchar(d + 48);
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
