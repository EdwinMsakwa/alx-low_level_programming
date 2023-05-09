#include "main.h"

/**
  * read_textfile - reads a text file and prints it to standard output.
  * @filename: source file argument
  * @letters: Number of letters to read and print
  * Return: 0 if file cannot be read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_var;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY, 0600);
	if (file_descriptor == -1)
		return (0);

	read_var = read(file_descriptor, buff, letters);
	write(STDOUT_FILENO, buff, read_var);

	free(buff);
	close(file_descriptor);
	return (read_var);
}
