#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: file name to pass
 * Return: 0 on success or error
 */
int main(int argc, char *argv[])
{
	int fd_fr, fd_t, nl_read, bwrite;
	char buf[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
	argv[1]), exit(98);

	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((nl_read = read(fd_fr, buf, BUFF_SIZE)) > 0)
	{
		bwrite = write(fd_t, buf, nl_read);
		if (bwrite != nl_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (nl_read < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(98);

	if (close(fd_fr) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr), exit(100);

	if (close(fd_t) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t), exit(100);

	return (0);
}
