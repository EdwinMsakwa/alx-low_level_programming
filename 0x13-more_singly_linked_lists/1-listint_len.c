#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts the elements in a linked list
  * @h: The head node of the linked list
  * Return: The number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int count_var = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count_var++;
		}
	}

	return (count_var);
}
