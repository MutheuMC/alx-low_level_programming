#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints mutiplication
 *
 * @argc: arg count
 * @argv: array of strings
 *
 * Return: Always success
 * 0 return 1 if argc <2
 */
int main(int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc <= 2)
	{
		printf(" Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("Multiplication = %d\n", mul);
		return (0);
	}
}
