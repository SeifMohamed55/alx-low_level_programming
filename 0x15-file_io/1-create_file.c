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
	int op, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL || _strlen(text_content) == 0)
	{
		op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (op == -1)
		{
			close(op);
			return (-1);
		}
		close(op);
		return (1);
	}
	else
	{
		op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (op == -1)
		{
			close(op);
			return (-1);
		}
		wr = write(op, text_content, _strlen(text_content));
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
		return (1);
	}
}
