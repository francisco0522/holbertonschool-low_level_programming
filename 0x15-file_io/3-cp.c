#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @argv: char
 * @argc: int
 * Return: 0 on success -1 on failure
 */
int main(int argc, char *argv[])
{
	int op1, op2, wr, rd;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op1 = open(argv[1], O_RDONLY);
	if (op1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (op2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		rd = read(op1, buff, 1014);
		wr = write(op2, buff, rd);
	} while (rd == 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(op1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1), exit(100);
	if (close(op2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2), exit(100);
	return (0);
}
