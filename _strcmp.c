#include "shell.h"
/**
 * _strcmp - compares only the bytes of s1 & s2.
 * @s1 : check.
 * @s2 : check.
 * Return: int < than, = to, or > than 0 if the fist n bytes are found.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for ( ; *s1 != '\0' && *s1 == *s2; s1++)
		s2++;
	i = *s1 - *s2;
	return (i);
}
