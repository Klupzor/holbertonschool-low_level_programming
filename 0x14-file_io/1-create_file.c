#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Create a file and write text content.
 *
 * @filename: The name of file.
 * @text_content: Content to write on a file.
 * Return: 1 on succes and -1  if it fail.
 */

int create_file(const char *filename, char *text_content)
{
	unsigned int strsize;
	ssize_t rfile;

	if (!filename)
		return (-1);

	for (strsize = 0 ; text_content[strsize] != '\0' ; strsize++)
	{
	}
	rfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (rfile == -1)
		return (-1);
	if (text_content)
		write(rfile, text_content, strsize);

	close(rfile);
	return (1);

}
