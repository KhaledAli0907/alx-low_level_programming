#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends a text to the end of a file
 *
 * @filename: name of the file
 * @text_content: text to write it to the file
 *
 * Return: 1 on Success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0, len = strlen(text_content);
	int fp = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_APPEND | O_WRONLY);
	if (fp == -1)
		return (-1);

	if (len)
		bytes = write(fp, text_content, len);

	close(fp);
	return (len == bytes ? 1 : -1);
}
