#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: char
 * @letters: size_t
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *c = malloc(letters);

	if (filename == NULL)
		return (0);

	if (c == NULL)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	rd = read(op, c, letters);

	if (rd == -1)
	{
		free(c);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, c, rd);

	if (wr == -1 || wr != rd)
	{
		free(c);
		close(op);
		return (0);
	}
	free(c);
	close(op);
	return (wr);
}
