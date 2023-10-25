#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: double pointer
 * Return: a pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head, *prev = NULL;

	while (curr != NULL)
	{
		curr->next = prev;
		prev = curr;
	}

	*head = prev;
	return (*head);
}
