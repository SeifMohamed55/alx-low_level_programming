#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of elements
 * @h: the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t c = 0;

	if (h == NULL)
		return (0);
	while (p)
	{
		if (p->str == NULL)
		{
			p = p->next;
			continue;
		}
		c++;
		p = p->next;
	}
	return (c);
}
