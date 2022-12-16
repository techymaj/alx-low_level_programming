#include <stdio.h>
/**
  * main - Starting point of the program
  * Description: 0-9 but in reverse
  * Return: Returns 0 upon success
  */
int main(void)
{
	int i;

	for (i = 57; i >= 48; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
