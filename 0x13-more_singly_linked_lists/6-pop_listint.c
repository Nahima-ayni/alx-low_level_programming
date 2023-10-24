#include "lists.h"

/**
 * pop_listint -  deletes the head node
 * @head: double pointer
 * Return: return 0 if head is null else the data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;

	n = temp->n;
	free(temp);
	return (n);
}
