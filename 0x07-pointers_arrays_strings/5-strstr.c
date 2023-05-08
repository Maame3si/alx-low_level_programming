#include "main.h"
/**
 * _strstr - Entry point
 * @hatstack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *nedle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = nedle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
