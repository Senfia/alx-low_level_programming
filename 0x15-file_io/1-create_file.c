#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: NULL-terminated string written to file
 * Return: -1 if filename is NULL
 */


int create_file(const char *filename, char *text_content)
{
	int file;
	size_t length;
	ssize_t nwrite;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	length = strlen(text_content);

	nwrite = write(file, text_content, length);

	if (filename == NULL)
		return (-1);

	if (file < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (nwrite < 0 || (size_t) nwrite != length)
		{
		close(file);
		return (-1);
		}
	}

	close(file);
	return (1);
}
