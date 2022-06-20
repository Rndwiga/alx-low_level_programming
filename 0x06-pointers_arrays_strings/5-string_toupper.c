#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] >= 'a' && s[y] <= 'z')
			s[y] = s[y] - 32;
	}

	return (s);
}
