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
	int op, rd;
	char *buf;
	int count;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	rd = read(op, buf, letters);
	count = write (STDOUT_FILENO, buf, rd);
	free(buf);
	return (count);
}
