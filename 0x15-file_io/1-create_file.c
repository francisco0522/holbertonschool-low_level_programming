#include "holberton.h"
/**
 * create_file - that creates a file.
 * @filename: char
 * @text_content: char
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, i, wr;

	if (filename == NULL)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (op == -1)
		return (0);
	wr = write(op, text_content, i);
	if (wr == -1)
	{
		close(op);
		return (0);
	}
	if (text_content == NULL)
		return (1);
	close(op);
	return (1);
}
