#include "shell.h"
/**
 * interactive - to create a song process in order to execute the command
 * @arr: array of tokens.
 * @path: conteins the all path of the command typed.
 * Return: does not return anything.
 */
void interactive(char **arr, char **path)
{
	pid_t child_pid;
	int i, status;

	status = 0;
	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		free(arr);
		free(path);
		_exit(1);
	}
	if (child_pid == 0)
	{
		for (i = 0; path[i]; )
			if (execve(path[i], arr, environ) == -1)
				i++;
		perror("Error");
		free(arr);
		_exit(1);
	}
	else
		wait(&status);
}
