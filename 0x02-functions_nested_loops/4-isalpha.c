#include<stdio.h>
/**
 * main- checks if alpahbet is alpha
 *
 * Description: Checks whether character is alphabet
 *
 * Return: 1 if lower or uppercase ,
 * 0 if not alphavet character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
		
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}


