#include "main.h"
/**
 * main- prints 1 to 100
 *
 * Description: mulplies of 3 prin fizzz
 * of 5 buzz
 * return : 0 success
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0 )
			printf("FizzBuzz");;
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
