#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
