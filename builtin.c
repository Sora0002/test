#include "shell.h"

/**
 * builder - check if build in command
 * @command: the command
 * 
 * Return: int
*/

int builder(char *command)
{
	int i = 0;

	while (b[i])
	{
		if(_strcmp(command, b[i]) == 0)
			return (1);
		else
			return (-1);
	}
}

/**
 * builderf - execute function
 * @command: the command to exec
*/