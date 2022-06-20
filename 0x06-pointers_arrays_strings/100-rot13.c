#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int y, z;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; a[z] != '\0'; z++)
		{
			if (s[y] == a[z])
			{
				s[y] = b[z];
				break;
			}
		}
	}

	return (s);
}
