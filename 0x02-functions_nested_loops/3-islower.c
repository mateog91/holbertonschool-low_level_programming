/**
* islower - Checks if the input is lowerchase character
* @c: Chacarter to check
*
* Return: 1 if lowercase, 0 otherwise
*/
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
