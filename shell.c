#include "shell.h"
/**
 * main - it is the main of the function shell
 *
 * Return: 0 in sucess.
 */
int main(void)
{ char *salto_linea = "\n";
	char *args, **arrtok, *env, **path, *fname = "plankton.txt";
	size_t len = 0;
	FILE *fptr = NULL;

	if((fptr = fopen(fname,"r")) == NULL)
	{ fprintf(stderr,"error opening %s\n",fname);

		return 1; }
	start_screen(fptr);
	fclose(fptr);
	signal(SIGINT, ctrlc);
	args = NULL;
	if (isatty(0))
		write(1, "Plankton ", 9);
	while (getline(&args, &len, stdin) != -1)
	{
		if (args[0] != '\n')
		{ arrtok = gettoken(args);
			if (built_ins(arrtok) == 'F')
			{
				if (arrtok[0][0] == '/')
				{ non_interactive(arrtok);
					if (isatty(0))
						write(1, "Plankton ", 9); }
				else
				{ env = _getenviro("PATH");
					path = _getpath(env, arrtok);
					interactive(arrtok, path);
					if (isatty(0))
						write(1, "Plankton ", 9); }
			}
			else
				if (isatty(0))
					write(1, "Plankton ", 9); }
		else
			if (isatty(0))
				write(1, "Plankton ", 9); }
	free(args);
	write(1, salto_linea, _strlen(salto_linea));
	return (0); }

void start_screen(FILE *file_ptr)

{
  char read_str[128];
	while(fgets(read_str,sizeof(read_str),file_ptr) != NULL)
	printf("%s",read_str);
}
