#include "main.h"

/**
  * create_file - creates a file
  * @filename: filename argument
  * @text_content: file content
  * Return: -1 if file is NULL
  */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_CREAT |
	 O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
		write(file_descriptor, text_content, _strlen(text_content));

	close(file_descriptor);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
