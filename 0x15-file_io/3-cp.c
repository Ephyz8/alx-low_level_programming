#include "main.h"
#include <stdio.h>
/**
 * err_file - check if a file is opened and handles errors
 * @from: initial file to copy from and to check
 * @to: destination file to copy to
 * @argv: argument
 * Return: void
 */

void err_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content of a file from one to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, err_clos;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "%s\n", "Usage: cp from to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	err_file(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buffer, 1024);
		if (nchars == -1)
			err_file(-1, 0, argv);
		nwr = write(to, buffer, nchars);
		if (nwr == -1)
		err_file(0, -1, argv);
	}
	err_clos = close(from);
	if (err_clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	err_clos = close(to);
	if (err_clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);

}
