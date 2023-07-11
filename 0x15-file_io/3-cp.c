#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
/**
 * _strlen - stlent
 * @x: string
 *
 * Return: no of chars
 **/
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
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int op_to, op_from, x, y, cl_to, cl_from;
	char *buf;

	if(argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	op_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if(op_to == -1)
	{
		close(op_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	op_from = open(argv[1], O_RDONLY);
	if(op_from == -1)
	{
		close(op_from);
		close(op_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	buf = malloc(BUF_SIZE * sizeof(char));
	if(!buf)
	{
		close(op_to);
		close(op_from);
		free(buf);
		return (-1);
	}
	x = read(op_from, buf, BUF_SIZE);
	if(x == -1)
	{
		close(op_to);
		close(op_from);
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);

	}
	while(x != 0)
	{
		y = write(op_to, buf, x);
		if(y == -1)
		{
			close(op_to);
			close(op_from);
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
		x = read(op_from, buf, BUF_SIZE);
		if(x == -1)
		{
			close(op_to);
			close(op_from);
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);

		}
	}
	cl_to = close(op_to);
	if(cl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_to);
		free(buf);
		return (100);
	}
	cl_from = close(op_from);
	if(cl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_from);
		free(buf);
		return (100);
	}
	free(buf);
	return 0;


}
