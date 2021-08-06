/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int var = 1;

	return ((int) (((char *)&var)[0]));
}
