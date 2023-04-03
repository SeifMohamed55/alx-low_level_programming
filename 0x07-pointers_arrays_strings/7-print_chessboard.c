#include "main.h"
#include <string.h>
/**
 * print_chessboard - print the chessboard
 * @a: the board to be printed
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0; 
	int j = 0;

	while (j < 8)
	{
		for (i = 0 ; i < 8 ; i++)
		{
			_putchar(a[j][i]);
		}
		j++;
		_putchar('\n');
	}
}
