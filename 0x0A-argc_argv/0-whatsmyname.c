#include<stdio.h>

/**
 * main- print name
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Alway success 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
