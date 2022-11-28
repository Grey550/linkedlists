#include "lists.h"

/**
 * free_listint - frees a list
 * @head: stores the address of the node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;
}

