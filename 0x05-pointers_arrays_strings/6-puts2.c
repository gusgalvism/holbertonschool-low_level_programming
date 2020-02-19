#include  "holberton.h"

/**
 * puts2 - prints every other character of a string
 *@str: string type
 *
 * Return: every character, from first character, new line.
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
		_putchar('\n');
	}
	_putchar('\n');
}
