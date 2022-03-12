#include <stdio.h>
/**
 * main - main block
 * Description: Use 'putchar' to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		puchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
