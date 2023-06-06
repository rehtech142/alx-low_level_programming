#include "lists.h"

/**
 * reverse_listint - undo the linked list
 * @head: now points to the first node in a list
 *
 * Return: now points to the first node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
