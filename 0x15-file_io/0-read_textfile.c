#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: string will be of 0 and 1
 * @letters: number of letters to be read
 * Return: NULL, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff;
	ssize_t total_chars = 0, nread, n, nwrite;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	for (n = 0; (nread = read(file, buff, letters)) >
			0 && (size_t)total_chars < letters; ++n)
	{
		nwrite = write(STDOUT_FILENO, buff, (size_t)nread);
		if (nwrite < 0 || (size_t)nwrite != (size_t)nread)
		{
			free(buff);
			close(file);
			return (0);
		}
		total_chars += nread;
		if ((size_t)total_chars >= letters)
			break;
	}

	free(buff);
	close(file);
	return (total_chars);
}
