#include "main.h"

/**
 * print- prints the alphabet, in lowercase, followed by a new line
 * Return: 1(success)
 */
void print_alphabet(void);
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}

