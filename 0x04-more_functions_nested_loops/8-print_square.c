#include "main.h"
/**
 * print_square- prints a square
 * @size: size of the square
 * Return: 0(success)
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; j < size; j++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
