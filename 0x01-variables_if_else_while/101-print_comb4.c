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
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
		    for (k = '2'; k <= '9'; k++)
		    {
			    if (i == j)
			    if (j == k)
			    if (i == k)
			    	continue;

		    	if (i < j)
		    	if (j < k)
			    {
			    	putchar(i);
			    	putchar(j);
			    	putchar(k);

			    	if (k == '9' && j == '8' && i == '7')
			    		break;
		    		putchar(',');
			    	putchar(' ');
			    }	
			}
		}
	}

	putchar('\n');

	return (0);
}
