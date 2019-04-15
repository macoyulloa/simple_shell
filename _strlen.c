#include "shell.h"
/**
 * _strlen - this function counts the leng of a string.
 * @s : the string to be counted.
 * Return: the leng og the string.
 */
int _strlen(char *s)
{
		int i = 0;

		while (*s++)
			i++;
		return (i);
}
