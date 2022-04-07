#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file, prints it to the POSIX standard output.
 * @filename: contains the name of file
 * @letters: Contains the number o characters in the text
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t fr, fw;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	return (0);

	fr = read(fd, buf, letters);
	if (fr < 0)
	return (0);

	fw = write(STDOUT_FILENO, buf, fr);
	if (fw < 0)
	return (0);

	free(buf);
	close(fd);
	return (fw);
}
