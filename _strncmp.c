#include "shell.h"
/**
 * _strncmp - compares only the first n bytes of s1 & s2.
 * @s1 : check.
 * @s2 : check.
 * @n : n first bytes of s1 & s2 to be compare.
 * Return: int < than, = to, or > than 0 if the fist n bytes are found.
 */
int _strncmp(char *s1, char *s2, size_t n)
{

	while (n--)
	{
		if (*s1 != *s2)
		{
			s1++;
			s2++;
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
		}
	}
	return (0);
}
