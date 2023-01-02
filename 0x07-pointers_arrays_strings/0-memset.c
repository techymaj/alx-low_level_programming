#include "main.h"

/**
  * _memset - Fills memory with a constant byte
  * Description: A function to fill memory with a constant byte
  * @a: Memory area to be filled
  * @b: The constant byte
  * @n: Number of times to copy b
  * Return: Pointer to the memory area a
  *
  */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}
