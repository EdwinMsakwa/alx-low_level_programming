#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a linked list
  * @head: head node
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp_list;

	if (head)
	{
		while (*head)
		{
			temp_list = (*head);
			*head = (*head)->next;
			free(temp_list);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
