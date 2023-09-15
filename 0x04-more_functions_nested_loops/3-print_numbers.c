#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * This function prints numbers from 0 to 9 followed by a newline character.
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

