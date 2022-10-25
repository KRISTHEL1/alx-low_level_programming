#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s:string pointer
 * Return:0(success)
 */
int _strlen(char *s)
{
	int p = 0;
	/*
	 * increment up to when the last character is NULL,\0/
	 */
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
