#include "shell.h"
/**
 * exit_built_in - exit the program.
 * @arguments: the arguments that are passing.
 * Return: 1.
 */
void exit_built_in(char **arguments)
{
	free(arguments);
	exit(1);
}
