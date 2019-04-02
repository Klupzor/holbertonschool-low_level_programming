#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Open, write and write a file.
 *
 * @filename: The name of file.
 * @letters: Nums the letters to print.
 * Return: printed chars or 0 if it fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	num = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, num);
	if (num == -1 || fd == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (num);

}
