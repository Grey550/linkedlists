#include "list.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: a pointer to the head of the list
 * @index: the index of the node to return
 *
 * Return: null if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
