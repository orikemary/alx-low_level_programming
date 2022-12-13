#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 *
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
		{

			if (!((ones == tens) || (tens > ones)))/* eliminates repitition*/
			{

			putchar(tens);
			putchar(ones);
			if (!(ones == '0' && tens == '8'))/*add comma and space*/
			{
				putchar(',');
				putchar(' ');
			}
		}
}	}
putchar('\n');
return (0);
}
