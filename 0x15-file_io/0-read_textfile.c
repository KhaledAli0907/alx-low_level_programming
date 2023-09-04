#include "main.h"

/**
 * read_textfile - Reads a text fie and prints it to the POSIX std output
 *
 * @filename: Name of the file.
 * @letters: Number of litters it should read or print
 *
 * Return: actual number of letters it could read or print/
 * 0 if there is an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes = 0;
	char buffer[1024 * 8];
	int fp = 0;

	if (!filename || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	bytes = read(fp, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);

	close(fp);
	return (bytes);
}
