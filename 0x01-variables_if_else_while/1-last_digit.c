#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main -Starting point of program
  * Description: Last Digit
  * Return: Returns 0 on success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int d, l;

	d = n % 10;
	l = d;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, l);
	}
	return (0);
}
