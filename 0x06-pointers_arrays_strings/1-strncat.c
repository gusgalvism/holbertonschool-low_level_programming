#include "holberton.h"

/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a;
	int b;

	if (dest == NULL)
	{
		return (NULL);
	}
	if (src == NULL)
	{
		return (dest);
	}



	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}