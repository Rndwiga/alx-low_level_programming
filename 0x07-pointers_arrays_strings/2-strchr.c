#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int y;

		while (1)
		{
			y = *s++;
			if (y == c)
			{
				return (s - 1);
			}
			if (y == 0)
			{
				return (NULL);
			}
		}
}
