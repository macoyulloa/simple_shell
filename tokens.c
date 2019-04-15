#include "shell.h"
/**
 * gettoken - to get the tokens of the arguments and keep it in a grill.
 * @string: the tokens of the argument.
 * Return: the pointer to an aaray of tokens.
 */
char **gettoken(char *string)
{
        int i = 0;
        char **arguments;
	int size;

	size = _strlen(string);
        arguments = malloc(sizeof(char *) * size);
        if (!arguments)
        {
                free(arguments);
                exit(1);
        }
        arguments[i] = _strtok(string, "\n ");
        while (arguments[i])
        {
		i++;
                arguments[i] = _strtok(NULL, "\n ");
        }
	return (arguments);
}
char *_strtok(char *str, const char *del)
{
	static char *s;
	static unsigned int i;
	char *new_str = NULL;
	int space = 0;

	if (str != NULL)
	{
		s = str;
		for (i = 0; s[i]; i++)
		{
			if (is_del(s[i], del))
				s[i] = '\0';
		}
	}

	if (s == NULL || *s == '\0' || *s == '#')
		return (NULL);
	new_str = s;
	i = _strlen(s);
	if (s[i] == '\0' && _strlen(s) > 0)
		space = 1;
	s = s + _strlen(s) + space;
	return (new_str);
}
int is_del(char c, const char *del)
{
	for (; del != NULL && *del != '\0'; del++)
		if (c == *del)
			return (1);
	return (0);
}
