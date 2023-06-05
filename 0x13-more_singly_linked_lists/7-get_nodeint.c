#include "lists.h"

/**
 * get_nodeint_at_index - outputs the node at a fixed index in a linked list
 * @head: will be the first node in the linked list
 * @index: will be the index of the node that it outputs
 *
 * output: points to the node that is being searched, or output NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
