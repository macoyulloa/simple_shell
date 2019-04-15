#include "shell.h"
/**
 * ctrlc - if user digit CTRLC do not finished excecution.
 * @signalnum: CTRLC.
 * Return: it is void function.
 */
void ctrlc(int signalnum)
{
	if (signalnum == SIGINT)
		write(STDOUT_FILENO, "\n$ ", 3);
}
