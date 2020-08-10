#include "holberton.h"
/**
 * create_file - this function create a file void
 * @filename: file name
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file
 * can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, runner;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (runner = 0; text_content[runner] != '\0'; runner++)
		;
		write(fd, text_content, runner);
	}


close(fd);
return (1);
}
