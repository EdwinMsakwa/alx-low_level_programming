#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file -  appends text at the end of a file.
  * @filename:  name of the file.
  * @text_content: text
  * Return: -1 if filename is NULL
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		if (write(file_descriptor, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
