#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0'); /* Convert number to character */
		if (number != 9) /* Check if it's not the last number */
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}
	putchar('\n'); /* Print newline */

	return (0);
}
