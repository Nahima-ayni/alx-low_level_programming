#include "lists.h"

/**
 * list_len - function to get the number of elements
 * @h: Pointer to the head of the linked list
 * Return: return number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
