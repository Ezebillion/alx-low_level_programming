#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: size of bytes of s2 to be coppied
 *Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + 1));
		n = len2;
	}

	if (!s)
		return (NULL);

	if (s != NULL)
	{
		/* copy the first string to destination */
		for (i = 0; i <= len1; i++)
		{
			s[i] = s1[i];
		}

		/* append the second string to destination */
		for (i = 0; i <= n; i++)
		{
			s[len1 + i] = s2[i];
		}
	}
	return (s);
}
