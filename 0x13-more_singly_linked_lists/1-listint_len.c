#include "lists.h"

/**
 * listint_len - outputs the number of elements in the  linked lists
 * @h: the linked list of a type listint_t to pass over
 *
 * output: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
