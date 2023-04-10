#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: string will be of 0 and 1
 * @letters: number of letters to be read
 * Return: NULL, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t total_chars, nread, n;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);


	buff = (char *) malloc(1024);
	if (!buff)
		return (0);

	total_chars = 0;

	for (n = 0; (nread = read(fd, buff, 1024)) >
0 && (size_t) total_chars < letters; ++n)
	{
		ssize_t nwrite = write(STDOUT_FILENO, buff, (size_t) nread);

		if (nwrite < 0 || (size_t) nwrite != (size_t) nread)
		{
		free(buff);
			close(fd);
		return (0);
		}
		total_chars += nread;
		if ((size_t) total_chars >= letters)
		{
			break;
		}
	}

	free(buff);
	close(fd);
	return (total_chars);
}
