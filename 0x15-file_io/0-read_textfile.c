#include "holberton.h"
/**
 * read_textfile - this function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file that content the data
 * @letters: size of buffer
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cp_letters;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	cp_letters = read(fd, buffer, letters);
	if (cp_letters == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	cp_letters = write(STDOUT_FILENO, buffer, cp_letters);
	if (cp_letters == -1)
	{
		return (0);
	}

	close(fd);
	free(buffer);
	return (cp_letters);
}
