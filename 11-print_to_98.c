#include "main.h"
#include<stdio.h>

/**
 * main- prints numbers from given n to 98 , inoredre
 *
 * Description: function to print numbers
 *
 * Return:void
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
