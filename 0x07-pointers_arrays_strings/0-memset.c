#include "main.h"

/**
  * _memset.c: Fills memory with a constant byte
  * 
  * Return: Pointer
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
