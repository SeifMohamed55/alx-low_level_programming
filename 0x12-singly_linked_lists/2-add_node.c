#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node
 * @head: ptr to pointer
 * @str: the string
 *
 * Return: the address of the new element or  NUll i failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	unsigned int len;

	if (node == NULL)
		return (NULL);
	node->next = *head;
	*head = node;
	node->str = strdup(str);
	len = strlen(str);
	node->len = len;
	return (node);
}
