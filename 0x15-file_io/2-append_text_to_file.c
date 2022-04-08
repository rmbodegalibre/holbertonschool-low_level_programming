#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to modify
 * @text_content: Text to add at the end of the file
 * Return: -1 if filename is NULL, 1 if the file exists,
 * -1  if the file does not exist or if you do not have the required
 * permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, fw;

	len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
