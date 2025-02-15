#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
			putchar(number + '0'); /* Print numbers 0-9 */
		else
			putchar(number - 10 + 'a'); /* Print letters a-f */
	}
	putchar('\n'); /* Print newline */

	return (0);
}
