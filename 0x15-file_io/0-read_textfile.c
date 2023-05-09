#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - prints to std output
 * @filename: filename
 * @letters: no of letters
 *
 * Return: 0 if write fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd,i=0;
	char *buf;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	rd = read(op, buf, letters);
	if (rd == -1)
	{
		close(op);
		free(buf);
		return (0);
	}
	for (i = 0; i < rd ; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1))
		{
			close(op);
			free(buf);
			return (0);
		}
	}
	close(op);
	free(buf);
	return (rd);
}
