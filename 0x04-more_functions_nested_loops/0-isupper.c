#include "main.h"

/**
 * main- checks for uppercase character
 *
 * Description: program that checks for uppercase
 *
 * Return: 1 if tru , 0 if false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
