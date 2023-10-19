#include "lists.h"

/**
 * print_list - function name
 * @h: a pointer to a constant structure
 * Return: always success
 */
size_t print_list(const list_t *h)
{
	int  mark = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		mark++;
		h = h->next;
	}
	return (mark);
}
