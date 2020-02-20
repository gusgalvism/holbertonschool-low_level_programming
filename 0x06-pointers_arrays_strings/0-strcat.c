#include "holberton.h"

/**
 * _strcat - that concatenates two strings
 *
 * @dest: char type
 * @src: char type
 * Return:  concatenated two strings
 */

char *_strcat(char *dest, char *src)

{
	int leng, size;

	for (leng = 0; dest[leng] != '\0'; leng++)
	{

	}
	for (size = 0; src[size] != '\0'; size++)
	{
		dest[leng + size] = src[size];
	}
	dest[leng + size] = '\0';
	return (dest);
}

