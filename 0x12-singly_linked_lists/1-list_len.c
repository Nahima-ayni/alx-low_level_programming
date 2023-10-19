#include "lists.h"

/**
 * list_len - function to get the number of elements
 * @h: Pointer to the head of the linked list
 * Return: return number of elements in the list
 */
size_t list_len(const list_t *h)
{
    size_t count = 0; // Initialize a variable to keep track of the count

    // Traverse the list while h is not NULL
    while (h != NULL)
    {
        count++;    // Increment the count for each node
        h = h->next; // Move to the next node
    }

    return count; // Return the total count of nodes
}

