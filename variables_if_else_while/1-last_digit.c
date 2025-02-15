#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include stdio.h for printf */

/**
 * main - Determines if a number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;  /* Get the last digit of n */

	/* Print the result */
	if (last_digit < 0)
	{
		last_digit = -last_digit;  /* Make it positive for comparison */
	}

	printf("Last digit of %d is %d and is ", n, 
		(n < 0) ? -last_digit : last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);  /* Return success */
}
