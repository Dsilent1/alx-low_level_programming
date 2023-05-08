#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created.
 * @text_content: content to write in the file.
 *
 * Return: -1 If the function fails. 1 if it is a success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int m;
	int Tletters;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (Tletters = 0; text_content[Tletters]; Tletters++)
			;
	}

	m = write(fd, text_content, Tletters);

	if (m == -1)
		return (-1);

	close(fd);

	return (1);
}
