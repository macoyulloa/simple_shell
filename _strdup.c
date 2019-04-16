#include "shell.h"
/**
 * _strdup - duplicate the string str using the head memory, wirth malloc.
 * @str: string to be duplicate.
 * Return: a pointer to a new string which is a duplicate of str.
 */
char *_strdup(char *str)
{
	char *str1;
	int leng;

	str1 = str;
	if (str != NULL)
	{
		for (leng = 0; str1[leng] != '\0'; leng++)
		{
		}
		leng = leng + 1;
		str1 = malloc(sizeof(char) * leng);
		if (str1 == NULL)
		{
			free(str1);
			return (NULL);
		}
		else
		{
			for (leng = 0; str[leng] != '\0'; leng++)
				str1[leng] = str[leng];
			return (str1);
		}
	}
	free(str1);
	return (NULL);
}
