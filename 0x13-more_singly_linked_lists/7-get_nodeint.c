#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer
 * @index: unsigned integer to get the index
 * Return: return null if its not successful else return current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	size_t current_index = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index++;
	}
	return (NULL);
}
