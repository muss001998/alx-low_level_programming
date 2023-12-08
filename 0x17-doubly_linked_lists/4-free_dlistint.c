#include "lists.h"

/**
 * free_dlistint - this will always free a dlistint_t list.
 * @head: this will show  pointer to head of the list
 * Return:will always return  nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
