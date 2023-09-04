#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file
 *
 * @filename: name of the file
 * @text_content: content to add to the new file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = strlen(text_content), bytes = 0;
	int fp = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (len)
		bytes = write(fp, text_content, len);

	close(fp);
	return (bytes == len ? 1 : -1);
}
