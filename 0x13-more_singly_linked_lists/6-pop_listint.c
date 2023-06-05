#include "lists.h"

/**
 * pop_listint - removes the head node of the linked list
 * @head: now points to the first element in the linked list
 *
 * output: the info inside the elements that was removed,
 * or output 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

