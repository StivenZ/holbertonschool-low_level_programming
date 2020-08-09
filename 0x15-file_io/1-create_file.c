#include "holberton.h"
/**
 * create_file - Creates a file
 * @filename: name of the file
 * @text_content: null terminated string to create a file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t countw, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	while (text_content != NULL && text_content[i] != '\0')
	{
		i++;
	}
	countw = write(fd, text_content, i);
	if (i != countw || countw == -1)
		return (-1);

	close(fd);
	return (1);
}
