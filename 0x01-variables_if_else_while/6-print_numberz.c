#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: a program that prints all single digit numbers of base
 * 10 starting from 0
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
		j++;
	}
	putchar(10);
	return (0);
}
