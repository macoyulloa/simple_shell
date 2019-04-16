#include "shell.h"
/**
* exit_built_in - exit the program.
* @arguments: the arguments that are passing.
* Return: 1.
*/
int exit_built_in(char **arguments)
{
	int status = 2;

	if (!arguments[1])
	{
		free(arguments);
		_exit(0);
	}
	else
	{
		free(arguments);
		_exit(status);
	}
	return(status);
}
