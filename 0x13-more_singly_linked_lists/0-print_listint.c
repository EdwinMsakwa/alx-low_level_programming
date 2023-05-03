#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints the elements of a linked list
  * @h: The head of the linked list object
  * Return: The number of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count_var = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count_var++;
		}
	}

	return (count_var);
}
