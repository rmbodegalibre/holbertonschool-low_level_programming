#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void cp_file(int fd1, int fd2, char *av1, char *av2);

/**
 * main - copies the content of a file to another file
 * @ac:	Counter of arguments
 * @av: List of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, c1, c2;

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	cp_file(fd1, fd2, av[1], av[2]);
	c1 = close(fd1);
	if (c1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	exit(100);
	}
	c2 = close(fd2);
	if (c2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	exit(100);
	}
	return (0);
}

/**
 * cp_file - copies the content of a file to another file
 * @fd1: descriptor 1
 * @fd2: descriptor 2
 * @av1: filename 1
 * @av2: filename 2
 */

void cp_file(int fd1, int fd2, char *av1, char *av2)

{
	int rl, rw;
	char mybuff[1024];

	while ((rl = read(fd1, mybuff, 1024)) > 0)
	{
	rw = write(fd2, mybuff, rl);
	if (rw == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av2);
	exit(99);
	}
	}
	if (rl == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av1);
	exit(98);
}
}
