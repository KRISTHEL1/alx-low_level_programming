#include "main.h"
#include <stdio.h>

/**
 * main- prints largest prime factor of the number
 * Return: 0(success)
 */
int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
