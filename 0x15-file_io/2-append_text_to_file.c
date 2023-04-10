#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: NULL-terminated string written to file
 * Return: 1, or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t nwrite;
	size_t length = 0;
	char *p = text_content;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (*p != '\0')
		{
			p++;
			length++;
		}
		nwrite = write(file, text_content, length);

		if (nwrite < 0 || (size_t) nwrite != length)
		{
		close(file);
		return (-1);
		}
	}

	close(file);
	return (1);
}
