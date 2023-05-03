#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: head node
  * @index: index number
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count_var = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count_var == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count_var++;
	}

	return (-1);
}
