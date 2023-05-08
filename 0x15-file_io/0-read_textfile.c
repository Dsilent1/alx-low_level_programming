#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and print STDOUT or letters.
 * @filename: filename.
 * @letters: numbers of letters to read and print.
 *
 * Return: numbers of letters to be printed. If fails or NULL, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t m;
	ssize_t u;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	u = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, u);

	close(fd);
	free(buf);
	return (m);
}
