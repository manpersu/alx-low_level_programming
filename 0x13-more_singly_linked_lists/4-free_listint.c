#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next;


	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}

}
