#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * error - error * @argc: number of arguments
 * @cd : error code
 * @msg : message
 * Return: 0 on success or error
 */

void error(char *msg, int cd)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(cd);
}

/**
 * main - copies the content of a file to another file, custom function
 * @argc: number of arguments
 * @argv: file name to pass
 * Return: 0 on success or error
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buff[BUFF_SIZE];
	ssize_t nread;

	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error("Error: Can't read from file", 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
		error("Error: Can't write to file", 99);

	while ((nread = read(file_from, buff, BUFF_SIZE)) > 0)
		if (write(file_to, buff, nread) != nread)
			error("Error: Can't write to file", 99);

	if (nread == -1)
		error("Error: Can't read from file", 98);

	if (close(file_from) == -1)
		error("Error: Can't close fd", 100);

	if (close(file_to) == -1)
		error("Error: Can't close fd", 100);

	return (0);
}
