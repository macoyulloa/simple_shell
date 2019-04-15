#include "shell.h"
/**
 * printenv_built_in - to print in the prompt the enviorement of the variable.
 * @arguments: the arguments.
 * Return: void function.
 */
void printenv_built_in(char **arguments)
{
	int i, j;

	if (!arguments[1])
	{
		for (i = 0; environ[i]; i++)
		{
			for (j = 0; environ[i][j] != '\0'; j++)
				_putchar(environ[i][j]);
			_putchar('\n');
		}
	}
}
