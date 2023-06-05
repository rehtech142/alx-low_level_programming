#include "lists.h"

/**
 * free_listint - print a linked list
 * @head: listint_t list will be printed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
