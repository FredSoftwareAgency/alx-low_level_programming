#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: any integer
 * Return: 1 if is upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
