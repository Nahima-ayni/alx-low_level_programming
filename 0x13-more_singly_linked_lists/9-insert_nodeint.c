#include "lists.h"

/**
 * insert_nodeint_at_index - insertion at a given position
 * @head: structure double pointer
 * @idx: unsigned integer
 * @n: integer
 * Return: always success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	size_t i;

	if (*head == NULL || head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
