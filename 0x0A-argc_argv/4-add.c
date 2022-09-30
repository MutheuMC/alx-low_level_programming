#include<stdio.h>
#include<stdlib.h>

/**
 * main- prints sum of numbers
 *
 * @argc: arguments count
 * @argv:argument vector
 *
 * Return: Always success 0;
 *
 */
int main(int argc, char **argv)
{
	int i;
	int i2;
	int sum = 0;


	if (argc < 0)
	{
		printf("0\n");
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		for (i2 = 0; argv[i][i2] != '\0'; i2++)
		{
			if (argv[i][i2] <  '0' || argv[i][i2] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[1]);
	}
		printf("%d\n", sum);
		return (0);
}
