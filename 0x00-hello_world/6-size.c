#include <stdio.h>
/**
  * main - Start of program
  * Description: Printing datat type sizes
  * Return: Returns 0 on success
  */
int main(void)
{
	char c;
	int i;
	long l;
	long li;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (signed long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (signed long)sizeof(li));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));

	return (0);
}
