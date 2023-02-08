#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  *read_textfile - reads a text file and prints it to the POSIX STDOUT
  *@filename: text file
  *@letters: number of letters it should read and print
  *Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			free(buff);
			return (0);
		}

	rd = read(fd, buff, letters);
		if (rd == -1)
		{
			free(buff);
			close(fd);
			return (0);
		}

	wr = write(STDOUT_FILENO, buff, rd);
		if (wr == -1)
		{
			free(buff);
			close(fd);
			return (0);
		}
	close(fd);
	free(buff);
	return (wr);
}
