#include "shell.h"
/**
 * _strcpy - copies the src, including '\0', to the buffer pointed to dest.
 * @dest : string
 * @src : string
 * Return: a pinter to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
