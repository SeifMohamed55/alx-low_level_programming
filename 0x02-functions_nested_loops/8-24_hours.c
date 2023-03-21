#include <stdio.h>
/**
 * jack_bauer - print every minute and hour of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	char x = '0', y = '0', z = '0', w = '0';

	while (x <= '2' )
	{
		y = '0';
		while (y <= '9')
		{
			z = '0';
			while (z <= '5')
			{	w = '0';
				while (w <= '9')
				{
					if (x == '2' && y == '4')
						return;
					printf("%c%c:%c%c\n", x, y, z, w);
					w++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
