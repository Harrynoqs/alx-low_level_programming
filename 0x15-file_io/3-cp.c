#include "main.h"
/**
  * main - entry point
  * @argc: argument count
  * @argv: arguement string
  * Return: a string of text
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - ...
  * @src: file_from
  * @dest: file_to
  *
  * Return: nothing
  */
void copy_file(const char *src, const char *dest)
{
	int ffrm, ffto, rd;
	char buff[1024];

	ffrm = open(src, O_RDONLY);
	if (!src || ffrm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	ffto = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(ffrm, buff, 1024)) > 0)
	{
		if (write(ffto, buff, rd) != rd || ffto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ffrm) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrm);
		exit(100);
	}

	if (close(ffto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffto);
		exit(100);
	}
}
