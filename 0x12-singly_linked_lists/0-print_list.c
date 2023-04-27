#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list - traverse and print list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int i = 0;

	if (h == NULL)
		return (0);
	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		i++;
		p = p->next;
	}
	return (i);

}
