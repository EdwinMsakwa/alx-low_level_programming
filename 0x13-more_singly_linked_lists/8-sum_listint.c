#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sums linked list
  * @head: head node
  * Return: int or 0 if empty
  */
int sum_listint(listint_t *head)
{
	int amount_var = 0;

	if (head)
	{
		while (head)
		{
			amount_var += head->n;
			head = head->next;
		}
	}

	return (amount_var);
}
