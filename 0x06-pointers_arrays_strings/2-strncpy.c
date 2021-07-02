/**
* _strncpy -  function that copies a string.
* @dest: Array where it will copy to.
* @ src: Array where it will copy from.
*
* Return: Pointer to dest array.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(i <= n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
