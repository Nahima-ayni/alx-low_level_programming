#include "lists.h"

/**
 * free_listint - to free the space for insertion at the end
 * @head: first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head != NULL)
	{
		freenode = head;
		head = head->next;

		free(freenode);
	}
}
