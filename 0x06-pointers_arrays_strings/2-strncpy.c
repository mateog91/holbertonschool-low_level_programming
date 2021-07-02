/**
* _strncpy -  function that copies a string.
* @dest: Array where it will copy to.
* @ src: Array where it will copy from.
* @n: number of chars to copy.
*
* Return: Pointer to dest array.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n; i++)
	{
		dest[i] = '\0'
	}
	return (dest);
}
