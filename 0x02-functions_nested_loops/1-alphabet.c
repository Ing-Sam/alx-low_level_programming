#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char alphlow;

	for (alphlow = 'a'; alphlow <= 'z'; alphlow++)
		_putchar(alphlow);

	_putchar('\n');
}
