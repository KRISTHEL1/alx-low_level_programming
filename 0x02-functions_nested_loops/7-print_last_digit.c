#include "main.h"

/**
 * print_last_digit- prints the last digit
 * @l: the number
 * Return: value of the last digit
 */
int print_last_digit(int l)
{
	int last digit = l % 10;

	if (last digit < 0)
		last digit *= -1;

	_putchar(last digit + '0');

	return (0);

