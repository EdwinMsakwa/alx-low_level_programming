#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of chars.
  * @size: Size of the array
  * @c: The char to fill in the array
  *
  * Return: Returns a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
