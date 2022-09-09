#include<stdio.h>

/**
 * main- print letters of alphabet
 *
 * Description: A program that prints alphabet in lowercase expect
 * e and q
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
