#include "main.h"

#define PERM 0600

/**
* create_file - creates a file
* @filename: file's filename
* @text_content: string to write to file
*
* Return: 1 (success), -1 (failure)
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT, PERM);
	if (fd < 0)
		return (-1);
	i = 0;
	while (*(text_content + i))
		++i;
	fd = write(fd, text_content, i);
	if (fd < 0)
		return (-1);
	return (1);
}
