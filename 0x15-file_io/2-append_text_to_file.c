#include "holberton.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text to append to the other file
 * Return: 1 if went well, -1 if failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;
	ssize_t countw;

	i = 0;

	if (text_content == NULL)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}

	countw = write(fd, text_content, i);

	if (countw == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
