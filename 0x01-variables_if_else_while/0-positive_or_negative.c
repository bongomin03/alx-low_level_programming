#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - generates random numbers and prints if posivtive, zero and negative
* Return: 0(successful)
*/
int main(void)  /* main - function that generates random numbers */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else
	{
		printf("%d is negative", n);
	}

	return (0);
}
