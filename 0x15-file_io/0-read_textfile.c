#include "main.h"

/**
* read_textfile - reads a text file and prints it to the
* POSIX standard output
* @filename: name of the file
* @letters: number of letters to read and print
*
* Return: the actual number of letters it could
* read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *out;
	ssize_t count;
	int nc;

	if (filename == NULL)
		return (0);
	out = malloc(sizeof(char) * letters);
	if (!out)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	count = read(fd, out, letters);
	if (count < 0)
		return (0);
	nc = write(STDOUT_FILENO, out, count);
	if (nc < 0)
		return (0);
	free(out);
	close(fd);
	return (count);
}
