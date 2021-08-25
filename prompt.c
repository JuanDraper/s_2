#include "holberton.h"

/**
 * prompt - a
 * @fd: a
 * @buf: a
**/
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}

/**
 * _puts - a
 * @str:a
 * Return: a
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
