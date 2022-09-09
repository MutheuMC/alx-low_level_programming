#include<stdio.h>
/**
 * main- print alphabet in uppercase and lowercase
 *
 * Description: a program that prints alphabrt in lowercase and uppercase
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j)
		j++;
	}
	putchar(10);
	return (0);
}
