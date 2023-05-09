#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - stlent
 * @x: string
 *
 * Return: no of chars
 */
int _strlen(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - createfile
 * @filename: files na,e
 * @text_content: sakpdkas
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int op, rd, wr, i = 0, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		op = open(filename, O_CREAT | O_TRUNC, 0600);
		close(op);
		return (1);
	}
	else
	{
		op = open(filename, O_CREAT | O_TRUNC, 0600);
		if (op == -1)
		{
			close(op);
			return (-1);
		}
		while (text_content[i] != '\0')
		{
			if (write(op, &text_content[i], 1) == -1)
			{
				close(op);
				return (-1);
			}
			i++;
		}
		_strlen(text_content);
		return (1);
	}
}
