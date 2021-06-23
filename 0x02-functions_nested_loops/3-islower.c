/**
* _islower - Checks if the input is lowerchase character
* @c: Chacarter to check
*
* Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
