#include "lists.h"

/**
 * add_nodeint_end - will add a node at the end of the linked list
 * @head: it now points to the first element in the list
 * @n: the data will input the new element
 *
 * Return: points to the new node, or output NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
