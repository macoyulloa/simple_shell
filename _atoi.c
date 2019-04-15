#include "shell.h"
/**
 * _atoi - Converts a array to an integer
 * @s: character array to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int i;
	unsigned int integer;
	int sign;

	i = 0;
	integer = 0;
	sign = 0;
	while (s[i] > '9' || s[i] < '0')
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		integer = integer * 10 + (s[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
	{
		integer = -1 * integer;
		return (integer);
	}
	if (integer == 0)
		return (0);
	return  (integer);
}
