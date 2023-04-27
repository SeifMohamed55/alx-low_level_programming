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
	unsigned int j;

	if (h == NULL)
		return (0);
	while (p)
	{
		if (p->str == NULL)
			printf("[%d] (nil)\n", i);
		else
		{
			printf("[%d] ",i);
			for (j = 0; j < p->len ; j++)
			{
				putchar(p->str[j]);
			}
			putchar('\n');
		}
		i++;
		p = p->next;
	}
	return (i);

}
