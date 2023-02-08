#include <unistd.h>
#include "main.h"
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

/**
  *append_text_to_file - append text to file
  *@filename: name of file
  *@text_content: string to append to filename
  *Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

	wr = write(fd, text_content, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	close(fd);
	return (1);
}
