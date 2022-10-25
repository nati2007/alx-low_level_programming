#include "MAIN.H"
#include <stdio.h>

/**
 * main - check the code for Alx Students
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "MAIN ALXSE";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
