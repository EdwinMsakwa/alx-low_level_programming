#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  * Return: The number of elements  list
  */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
