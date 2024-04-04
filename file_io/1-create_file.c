#include "main.h"
/**
 * create_file - Creates a file with the specified name
 * and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ptr = text_content;
		while (*ptr != '\0')
		{
			if (write(fd, ptr, 1) != 1)
			{
				close(fd);
				return (-1);
			}
			ptr++;
		}
	}
	else
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
