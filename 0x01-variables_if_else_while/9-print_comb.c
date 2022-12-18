#include <stdio.h>
/**
  * main - Start of program
  * Description: Printing single digits
  * Return: Always returns 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
