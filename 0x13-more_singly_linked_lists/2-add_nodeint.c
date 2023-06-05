#include "lists.h"

/**
 * add_nodeint - will add a new node at the start of a linked list
 * @head: now points to the first node in the list
 * @n: the data will now input the new node
 *
 * Return: points to the new node, or output NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
