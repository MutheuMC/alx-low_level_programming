#include<stdio.h>

/**
 * main-print the arguments in command line
 *
 * @argc: count of arguments in the command line
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	
	}
	return (0);
}
