#include "shell.h"
/**
 * cd_built_in - execute if the user type a cd command, directory change.
 * @arr: take in account the array of tokens.
 * Return: an int, 0 if is env or exit otherwise 1.
 */
int cd_built_in(char **arr)
{
	int i;
	char current[1024];
	char *new;

	if (arr[1] == NULL)
	{
		if (chdir(_getenviro("HOME")) == -1)
		{
			perror("ERROR");
			write(STDERR_FILENO, "Error in home\n", 14);
		}
	}
	else
	{
		getcwd(current, 1024);
		for (i = 0; current[i] != '\0'; i++)
			;
		current[i++] = '/';
		current[i] = '\0';
		new = _strcat(current, arr[1]);
		if (!new)
			return (0);
		if (chdir(new) == -1)
		{
			perror("ERROR");
			write(STDERR_FILENO, "Error in directory\n", 19);
		}
	}
	return (0);
}
