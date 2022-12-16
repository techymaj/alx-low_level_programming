#include <stdio.h>
/**
  * main - Start of program
  * Description: Letters of the alphabet with exceptions
  * Return: Returns 0 upon success
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101)
		{
			continue;
		}
		else if (i == 123)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

