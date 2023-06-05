#include "lists.h"

/**
 * free_listint2 - prints a linked list
 * @head: now points to the listint_t list to be printed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
