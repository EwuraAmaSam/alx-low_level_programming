#include "main.h"
#define BUFFER_SIZE 1024
/**
 * error_exit - prints an error message and exits the program
 * @message: the error message to print
 * Return: void
 */
void error_exit(char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(EXIT_FAILURE);
}
/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, r_count, w_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_count = write(fd_to, buffer, r_count);
		if (w_count != r_count)
			error_exit("Error: Can't write to file");
	}
	if (r_count == -1)
		error_exit("Error: Can't read from file");
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}

