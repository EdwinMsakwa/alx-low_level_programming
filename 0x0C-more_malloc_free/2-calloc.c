#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array,
  * @nmemb: number of array elements
  * @size: size of each element
  * Return: Null if nmemb is 0.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
