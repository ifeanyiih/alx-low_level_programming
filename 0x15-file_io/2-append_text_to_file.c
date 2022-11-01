#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the filename
* @text_content: the content to append
*
* Return: 1 (Success) otherwise, -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int i;
	int count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	i = 0;
	while (text_content && *(text_content + i))
		++i;
	count = write(fd, text_content, i);
	if (count  == -1)
		return (-1);
	return (1);
}
