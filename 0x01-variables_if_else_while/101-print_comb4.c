#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == i + 1 && k == j + 1)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
