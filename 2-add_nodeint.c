#include "list.h"

/**
 * add_nodeint - adds a new node at the beginning of a listlint_t
 * @head: the listlint_t
 * @n: the data for the new node
 *
 * Return: address of the new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	new_node = malloc(sizeof(struct listint_t));

	if (new_node ==  NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	*head = new_node;

	return (new_node);
}
