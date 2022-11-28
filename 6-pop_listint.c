#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: stores the address of the node
 *
 * Return: 0 if the list is empty
 */



int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (n);
}
