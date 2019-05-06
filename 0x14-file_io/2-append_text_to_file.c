#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to file.
 *
 * @filename: The name of file.
 * @text_content: Content to append on a file.
 * Return: 1 on succes and -1  if it fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int strsize;
	ssize_t rfile;

	if (!filename)
		return (-1);

	rfile = open(filename, O_WRONLY | O_APPEND);
	if (rfile == -1)
		return (-1);
	if (text_content)
	{
		for (strsize = 0 ; text_content[strsize] != '\0' ; strsize++)
		{
		}
		write(rfile, text_content, strsize);
	}

	close(rfile);
	return (1);

}
