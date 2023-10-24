#include "lists.h"

/**
 * free_listint2 - freeing a function and setting the head to NULL
 * @head: double pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *free_list;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		free_list = *head;
		*head = free_list->next;
		free(free_list);
	}
	*head = NULL;
}
