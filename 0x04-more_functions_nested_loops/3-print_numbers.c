#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 t0 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(int i) 
{
	int i;

	for (i = 0; i <= 9; i++)
		
	{	_putchar("%d", i);

		i++;
		_putchar('\n');
	}
	return (0);
}
