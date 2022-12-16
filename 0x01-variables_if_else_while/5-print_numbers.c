#include <stdio.h>
/**
  * main - Starting point of the program
  * Description: Printing 0-9
  * Return: Return 0 upon success
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
