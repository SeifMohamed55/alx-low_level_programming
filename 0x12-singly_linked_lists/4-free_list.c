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

	while(tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
