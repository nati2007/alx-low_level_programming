#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) = *(s + i) - 32;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
