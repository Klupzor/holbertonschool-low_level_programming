#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - copies the content of a file to another file.
 *
 * @argc: Num of arguments.
 * @argv: Arguments.
 * Return: Always 1.
 */

int main(int argc, char **argv)
{
	int fd, rd, ws, cs;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, buffer, 1024);
	close(fd);
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ws = write(fd, buffer, rd);
	if (ws == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
		exit(99);
	}
	cs = close(fd);
	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (1);
}
