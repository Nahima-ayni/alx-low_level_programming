#include "lists.h"

/**
 * listint_len - function name
 * @h: constant first node
 * Return: counter
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

