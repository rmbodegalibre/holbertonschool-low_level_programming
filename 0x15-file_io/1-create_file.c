#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create a file
 * @filename: The name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, fw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT, S_IRUSR | O_TRUNC | S_IWUSR | O_WRONLY);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		len++;

	fw = write(fd, text_content, len);
	if (fw < 0)
		return (-1);
	}
	close(fd);
	return (1);
}
