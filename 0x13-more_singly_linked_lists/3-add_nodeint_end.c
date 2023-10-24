#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer
 * @n: constant integer
 * Return: always success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *current;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
			current->next = last_node;
	}
	return (last_node);
}
