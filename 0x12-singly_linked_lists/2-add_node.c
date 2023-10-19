#include "lists.h"

/**
 * add_node - function name to insert at the beginning
 * @head: double pointer
 * @str: constant char pointer
 * Return: always success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
		length++;
	new = malloc(sizeof(list_t *));
	if (new == NULL)
		return (NULL);
	{
		new->len = length;
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
