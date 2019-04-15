#include "shell.h"
/**
 * built_ins - if the user digits a built in command: exit, env or cd.
 * @args: take in account the 0 token of the arg.
 * Return: a char F is it is false or o.
 */
char built_ins(char **args)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		exit_built_in(args);
		return (0);
	}
	else if (_strcmp(args[0], "env") == 0)
	{
		printenv_built_in(args);
		return (0);
	}
	else if (_strcmp(args[0], "cd") == 0)
	{
		cd_built_in(args);
		return (0);
	}
	return ('F');
}
