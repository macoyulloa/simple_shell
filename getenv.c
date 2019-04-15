#include "shell.h"
/**
 * _getenviro - get the enviroment of the commands.
 * @string: arguments.
 * Return: a pointer to a char of the string with the enviroment.
 */
char *_getenviro(char *string)
{
	int len, j, i;
	char **env;

	env = environ;
	for (len = 0; string[len] != '\0'; len++)
		;
	if (len == 0)
		return (NULL);
	i = 0;
	while (env[i])
	{
		for (j = 0; string[j] != '\0'; j++)
		{
			if (env[i][j] != string[j])
				break;
		}
		if (string[j] == '\0')
			return (env[i] + j + 1);
		i++;
	}
	return (NULL);
}
