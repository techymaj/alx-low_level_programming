#include <stdio.h>

/**
  * main - Start of program
  * Description: Print the alphabet
  * Return: Return 0 upon success
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		if (i == 122)
			putchar('\n');
		i++;
	}
	return (0);
}
