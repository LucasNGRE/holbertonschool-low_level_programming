#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]),
			exit(97);

	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]),
			close(fd_source), exit(99);

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]),
				close(fd_source), close(fd_dest), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			close(fd_source), close(fd_dest), exit(98);

	if (close(fd_source) == -1 || close(fd_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n"), exit(100);

	return (0);
}
