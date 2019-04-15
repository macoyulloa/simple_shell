#include "shell.h"
/**
 * _strcat - appends (anexa) the src string to the dest string
 * @dest: string to return
 * @src: string to be added in dest
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	/*char *destino, *fuente;*/

	/*dest = malloc(sizeof(dest));*/
	/*src = malloc(sizeof(src));*/
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
