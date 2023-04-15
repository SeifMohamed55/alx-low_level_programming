#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * min - retuns the minimum
 * @a:first num
 * @b: the second num
 *
 * Return: minimum
 */
int min(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
/**
 * _realloc - reallocates a memory block
 * @ptr: ptr previously allocated
 * @old_size: tje old size
 * @new_size: tje new size
 *
 * Return: ptr to the reallocated area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			free(ptr);
			return (NULL);
		}
		memcpy(new, ptr, old_size);
		free(ptr);
	}
	else
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			free(ptr);
			return (NULL);
		}
		memcpy(new, ptr, min(old_size, new_size));
		free(ptr);
		
	}
	return (new);

}
