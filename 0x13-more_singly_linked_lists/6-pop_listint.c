#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a list
  * @head: head node
  * Return: 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head_object;
	int n = 0;

	if (*head != NULL)
	{
		new_head_object = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head_object;
	}

	return (n);
}
