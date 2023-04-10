#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: name of the file
 * @text_content - the text to be appended
 * Return: 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = 0;
	while (text_content[len])
		len++;

	n_write = write(fd, text_content, len);
	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
