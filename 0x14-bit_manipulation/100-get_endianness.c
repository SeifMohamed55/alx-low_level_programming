/**
 * get_endianness - checks the endianess
 *
 * Return: 1 if little endianess 0 if big
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
