#include<stdio.h>
/**
 * main - prints single numbers
 *
 * Description: program that prints single numbers from 0
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
