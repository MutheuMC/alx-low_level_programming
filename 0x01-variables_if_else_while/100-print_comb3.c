#include<stdio.h>
/**
 * main - print double combo
 *
 * Description: print double combo
 *
 *Return: 0 (success)
 *
 */
int main(void)
{
	int  k = 48;
	int j = 48;

	while (k < 48)
	{
		j = k + 1;
		while (j < 58)
		{
			putchar(k);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		k++;
	}
	putchar(10);

	return (0);
}
