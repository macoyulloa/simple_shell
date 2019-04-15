#include "shell.h"
/**
 * _getpath - to get the all path and save it in a string without a delimitador
 * @s: the arguments
 * @args: arguments inserted
 * Return: return a pointer to an array with the complete path.
 */
char **_getpath(char *s, char **args)
{
	char **arr, *token, *path, *str, *del, *tok;
	int i;

	path = malloc(sizeof(char) * _strlen(s));
	if (!path)
	{
		free(path);
		_exit(1);
	}
	_strcpy(path, s);
	tok = malloc(sizeof(token));
	token = _strtok(path, ":");
	arr = malloc(sizeof(char *) * 1024);
	if (!arr)
	{
		free(arr);
		_exit(1);
	}
	str = malloc(sizeof(char) * 1024);
	if (!str)
	{
		free(str);
		_exit(1);
	}
	del = "/";
	for (i = 0; token; i++)
	{
		_strcat(str, token);
		_strcat(str, del);
		_strcat(str, args[0]);
		token = _strtok(NULL, ": ");
		arr[i] = _strdup(str);
		_memset(str, 0, _strlen(str));
	}
	free(tok);
	return (arr);
}
/**
 * _memset - copy the character b to the fist n characters of n.
 * @s: string.
 * @b: the value to be set.
 * @n: number of bytes to be set to the value.
 * Return: pointer to the block of memory to fill.
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
