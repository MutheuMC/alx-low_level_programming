#include<stdio.h>

/**
 * main- prints alphabet in lowercase
 *
 * Description: program that prints alphabet in lowercase
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
