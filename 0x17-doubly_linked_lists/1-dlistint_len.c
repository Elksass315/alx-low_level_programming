#include "lists.h"
/**
 * dlistint_len - Return number
 * @h: Pointer to struct doubly linked lists
 * Return: The amount of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
