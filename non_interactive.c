#include "shell.h"
/**
 * non_interactive - create song process to execute it in a non interactive way
 * @arr: the string.
 * Return: does not return anything.
 */
void non_interactive(char **arr)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		free(arr);
		_exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(arr[0], arr, environ) == -1)
		{
			perror("ERROR");
			_putchar('\n');
			free(arr);
			_exit(1);
		}
	}
	else
		wait(&status);
}
