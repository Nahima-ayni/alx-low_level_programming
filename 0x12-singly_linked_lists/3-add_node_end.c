#include "lists.h"

/**
 * add_node_end - function name, pointer
 * @head: double pointer struct
 * @str: constant a pointer char
 * Return: always success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;
	list_t *current;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = length;
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
