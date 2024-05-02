#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Description: This function appends text at the end of a file specified by
 * filename. If the file does not exist or if you do not have the required
 * permissions to write the file, it returns -1. If filename is NULL or
 * text_content is NULL, it also returns -1. Otherwise, it appends the text
 * content to the end of the file and returns 1 on success.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

	close(fd);
	return (1);
}
