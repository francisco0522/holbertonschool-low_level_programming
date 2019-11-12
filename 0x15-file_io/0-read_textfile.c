#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: char
 * @letters: size_t
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *c = malloc(letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, c, letters);

	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, c, rd);

	if (wr == -1 || wr != rd)
		return (0);

	return (wr);
}
