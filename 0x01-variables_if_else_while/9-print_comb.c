#include<stdio.h>

/**
 * main - prints single gigit numbers
 *
 * Description: Program that printssingle digit numbers with commas
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int j = 48;

	while (j < 58)
	{
		putchar(j);
		if (j != 57)
		{
			putchar(44);
			putchar(32);
		}
		j++;
	}
	putchar(10);

	return (0);
}
