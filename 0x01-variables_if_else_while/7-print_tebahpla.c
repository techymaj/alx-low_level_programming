#include <stdio.h>
/**
  * main - Starting point of the program
  * Description: 0-9 but in reverse
  * Return: Returns 0 upon success
  */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
