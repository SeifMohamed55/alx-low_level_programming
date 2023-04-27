#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node at end
 * @head: the head
 * @str: the string
 *
 * Return: the address of nod
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tmp;
	int len = strlen(str);

	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		*head = node;

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->next = NULL;
	node->len = len;
	node->str = strdup(str);
	return (node);
}
