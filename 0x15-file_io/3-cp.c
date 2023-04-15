#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * prints_usage - prints the usage
 * @program_name: the name of the program
 */

void print_usage(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

void print_error(char *message, char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_usage(argv[0]);
		exit(97);
	}
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		print_error("Can't read from file", file_from);
		exit(98);
	}
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		print_error("Can't write to", file_to);
		exit(99);
	}
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes;
	ssize_t write_bytes;

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			print_error("Can't write to", file_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		print_error("Can't read from file", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		print_error("Can't close fd", strerror(errno));
		exit(100);
	}
	return (0);
}

