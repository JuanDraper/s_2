#include "holberton.h"
/**
**shell_exit -a
**Return:a
**/

	int shell_exit(void)
	{
		return (-1);
	}


/**
**shell_env -a
**Return:a
**/

	int shell_env(void)
	{
		unsigned int i;

		i = 0;
		while (environ[i] != NULL)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
		return (0);
	}
