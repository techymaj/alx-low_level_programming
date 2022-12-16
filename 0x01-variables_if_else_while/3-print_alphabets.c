#include <stdio.h>

/**
  * main - Starting point of the program
  * Description: Printing alphabets
  * Return: Return 0 upon success
  */
int main(void)
{
	int i = 97;

	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;

		if (i == 123)
		{
			for (j = 65; j < 91; j++)
			{
				putchar(j);
			}
			putchar('\n');
		}
	}
	return (0);
}
