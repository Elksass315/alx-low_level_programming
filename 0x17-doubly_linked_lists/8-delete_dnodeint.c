#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node
 * @head: Pointer
 * @index: The position
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *res = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = res->next;
		if (res->next == NULL)
			return (-1);
		res->next->prev = NULL;
		free(res);
		return (1);
	}

	while (counter < index)
	{
		if (res->next == NULL)
			return (-1);
		res = res->next;
		counter++;
	}
	res->prev->next = res->next;
	if (res->next)
		res->next->prev = res->prev;
	if (res->next == NULL)
	{
		p1 = res->prev;
		p1->next = NULL;
		free(res);
		return (1);
	}
	free(res);
	return (1);
}
