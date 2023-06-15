#include "lists.h"
/**
 * free_dlistint - Free
 * @head: Pointer
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *memory;

	while (head != NULL)
	{
		memory = head->next;
		free(head);
		head = memory;
	}
}
