#include "lists.h"

/**
 * sum_listint - sum of the node
 * @head: pointer to the first node
 * Return: retun 0 if head is null else return sum
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *sumlink = head;
	int sum = 0;

	if (sumlink == NULL)
		return (0);

	while (sumlink != NULL)
	{
		sum += sumlink->n;
		sumlink = sumlink->next;
	}
	return (sum);
}
