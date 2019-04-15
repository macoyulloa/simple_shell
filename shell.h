#ifndef _SHELL_
#define _SHELL_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
extern char **environ;
void printenv_built_in(char **arguments);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_memset(char *s, int b, unsigned int n);
int _putchar(char c);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, size_t n);
int _strlen(char *s);
char built_ins(char **arguments);
void ctrlc(int signalnum);
void exit_built_in(char **arguments);
char *_getenviro(char *var);
void interactive(char **arr, char **path);
void simple_shell(void);
char **gettoken(char *string);
void non_interactive(char **arr);
char **_getpath(char *s, char **args);
int _strcmp(char *s1, char *s2);
int cd_built_in(char **array);
char *_strtok(char *str, const char *del);
int is_del(char c, const char *del);
void start_screen(FILE *file_ptr);
#endif
