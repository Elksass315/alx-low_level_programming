#include "lists.h"
/**
 * sum_dlistint - data Sum
 * @head: Pointer
 * Return: The result
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
