#include "main.h"
/**
 *swap_int- swaps values of 2 integers
 *@a: first integer
 *@b: second integer
 *Return: 0(success)
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
