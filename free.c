#include "holberton.h"

/**
 * free_all -a
 * @tokens: a
 * @path: a
 * @line: a
 * @fullpath: a
 * @flag: a
 * Return: a
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag == 1)
		free(fullpath);
}

/**
 * free_dp - a
 * @array:a
 * @length: a
 * Return: a
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

