#include "shell.h"
/**
 * main - it is the main of the function shell
 *
 * Return: 0 in sucess.
 */
int main(void)
{
	char *args, **arrtok, *env, **path;
	size_t len = 0;

	signal(SIGINT, ctrlc);
	args = NULL;
	free(args);
	while (getline(&args, &len, stdin) != -1)
	{
		if (args[0] != '\n')
		{ arrtok = gettoken(args);
			if (built_ins(arrtok) == 'F')
			{
				if (arrtok[0][0] == '/')
					non_interactive(arrtok);
				else
				{ env = _getenviro("PATH");
					path = _getpath(env, arrtok);
					interactive(arrtok, path);
				}
			}
		}
	}
	free(env);
        freed(arrtok);
        freed(path);
	free(args);
	return (0);
}
