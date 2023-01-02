#include <stdio.h>
/**
  * main - Start of the program
  * Description: Print possible combinations of 2 digits
  * Return: Always returns 0
  */
int main(void)
{
	int i;

	int j;

	int my_array[8];

	int x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (int x = 0; x < 8; x++)
			{
				my_array[x] = i + j;

				if ((i + j) <= my_array[x])
				{
					putchar(i);
					putchar(j);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
