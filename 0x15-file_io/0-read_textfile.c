#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stduot
 * @filename: file to be read
 * @letters: actual number of letters it should read and print
 * Return: actual number of letters it could do
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t countr;
	int countw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (!buf)
		return (0);

	countr = read(fd, buf, letters);

	if (countr == -1)
	{
		return (0);
	}

	countw = write(STDOUT_FILENO, buf, countr);

	if (countw == -1)
		return (0);

	close(fd);
	return (countr);
}
