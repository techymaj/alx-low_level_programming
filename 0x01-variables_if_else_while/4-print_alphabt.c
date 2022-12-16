#include <stdio.h>
/**
  * main - Start of program
  * Description: Letters of the alphabet with exceptions
  * Return: Returns 0 upon success
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if ((i == 101) || (i == 113))
		{
		continue;
		}
		else
		{
		putchar(i);
		i++;
		}
	}
	putchar('\n');
	return (0);
}

