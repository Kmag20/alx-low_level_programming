#include "main.h"

/**
 * read_textfile - reads a text file and prints it int the stdout
 * @filename: pathname of the file to be opened
 * @letters: number of letters it should read and print
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filenamre, size_t letters)
{
	int file_desc;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	bytes_read = read(file_desc, buffer, letters);

	bytes_written = write(STDOUT_FILENO, buffer, letters);

	if (bytes_read < 0 || bytes_written < 0 | file_desc < 0 | bytes_read != 		bytes_written)
		free(buffer);
		return (0);

	free(buffer);
	close(file_desc);

	return (bytes_written);
}
