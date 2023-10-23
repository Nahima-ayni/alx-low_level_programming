#include "lists.h"

/**
 * print_listint - function name
 * @h: the first node, constant
 * Return: always success
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
