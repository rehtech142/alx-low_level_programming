#include "main.h"

/**
 * create_file - will creates a file
 * @filename: points to the name of the file to be created
 * @text_content: points to a string so that it writes to a file
 *
 * Return: if the function is rejected - -1.
 *         or else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
