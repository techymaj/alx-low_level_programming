#include <stdio.h>
/**
  * main - Start of the program
  * Description: Printing all base16 numbers
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		while (i == 57)
		{
			i = i + 40;

			for (i = 97; i < 103; i++)
			{
				putchar(i);
			}
			putchar('\n');
			break;
		}
	}
	return (0);

}
