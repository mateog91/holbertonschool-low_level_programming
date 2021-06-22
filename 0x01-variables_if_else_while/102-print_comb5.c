#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print all numbers of base 16 in lower case followed by a new line
 * Return: 0
 */
int main(void)
{
	char num1 = 48, num2 = 48, num3 = num1, num4 = num2 + 1, last = 57;

	while (num1 <= last) /* most exterior k goes from 0 to 9 */
	{
		while (num2 <= last) /* second digit goes from 0 to 9 */
		{
			while (num3 <= last) /* first digit second column resets with k value */
			{
				while (num4 <= last) /* second digit second column resets with q+1 */
				{
					putchar(num1);
					putchar(num2);
					putchar(32);/* space */
					putchar(num3);
					putchar(num4);
					if (num1 == last && num2 == last - 1 && num3 == last && num4 == last)
					{
					}
					else
					{
						putchar(44);
						putchar(32);
					}
					num4++;
				}
				num3++;
				num4 = 48;
			}
			num2++;
			num3 = num1;
			num4 = num2 + 1;

		}
		num1++;
		num2 = 48;
	}
	putchar('\n');
	return (0);
}
