#include "holberton.h"

/**
 * _strcat - that concatenates two strings
 * @dest: char type
 * @src: char type
 * Return:  concatenated two strings
 */

char *_strcat(char *dest, char *src)
{
	int a;
	Int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}

