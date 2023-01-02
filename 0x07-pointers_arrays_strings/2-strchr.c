#include "main.h"
#include <stdio.h>

/**
  * _strchr - Locates a character in a string
  * @s: string to search
  * @c: Character to locate
  * Return: A pointer to the first occurrence of the char c
  * OR NULL if not founf
  */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
