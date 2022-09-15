#include<stdio.h>
/**
 * Main- checks for lowercase characters
 *
 * Description: to check if alphabet is lowercase
 *
 * Return:: 1 if lowercase, 0 if uppercase
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
