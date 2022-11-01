#include "main.h"

#define PERM 0664
#define BUFSIZE 1024

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
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY);
	if (f2 == -1)
		f2 = open(argv[2], O_WRONLY | O_CREAT, PERM);
	if (f2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((n = read(f1, buf, BUFSIZE)) > 0)
		if (write(f2, buf, n) != n)
		{
			dprintf(STDOUT_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	if (close(f1) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}

