#include <stdio.h>
/**
  * main - Starting point of program
  * Description: Do't use any variable of type char
  * Return: Returns 0 upon sucess
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

