#include "main.h"

#define PERM 0664
#define BUFSIZE 1024

void err(int fd, char mode, char *fn);

/**
* main - copies the content of a file to another file
* @argc: no. of command line args
* @argv: command line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	char buf[BUFSIZE];
	int f1, f2, n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		err(f1, 'r', argv[1]);
	f2 = open(argv[2], O_WRONLY | O_TRUNC);
	if (f2 == -1)
	{
		f2 = open(argv[2], O_WRONLY | O_CREAT, PERM);
		if (f2 == -1)
			err(f2, 'w', argv[2]);
	}

	while (((n = read(f1, buf, BUFSIZE)) > 0) && (n != -1))
		if (write(f2, buf, n) != n)
			err(f2, 'w', argv[2]);
	if (n == -1)
		err(f1, 'r', argv[1]);
	if (close(f1) == -1)
		err(f1, 'c', NULL);
	if (close(f2) == -1)
		err(f2, 'c', NULL);
	return (0);
}

/**
* err - handle errors
* @fd: file descriptor
* @mode: fd mode
* @fn: filename
*/
void err(int fd, char mode, char *fn)
{
	if (mode == 'r')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(98);
	}
	if (mode == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn);
		exit(99);
	}
	if (mode == 'c')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
