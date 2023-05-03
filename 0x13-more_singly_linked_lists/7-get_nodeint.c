#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: head node
  * @index: index
  * Return: pointer to node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count_var = 0;

	if (head)
	{
		while (head)
		{
			if (count_var == index)
				return (head);

			head = head->next;
			count_var++;
		}
	}

	return (NULL);
}
