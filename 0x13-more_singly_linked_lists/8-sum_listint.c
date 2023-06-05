#include "lists.h"

/**
 * sum_listint - calculates the sum of the entire data in the listint_t list
 * @head: will be the first node in the linked list
 *
 * output: the result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
