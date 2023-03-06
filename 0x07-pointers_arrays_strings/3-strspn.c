
elpacificmb
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Beta Try the new code view
alx-low_level_programming/0x07-pointers_arrays_strings/3-strspn.c
@elpacificmb
elpacificmb Tandatory tasks
 1 contributor
29 lines (25 sloc)  441 Bytes
#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
