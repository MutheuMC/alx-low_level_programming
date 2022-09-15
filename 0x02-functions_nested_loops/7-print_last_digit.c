#inclue "main.h"
/**
 * main- print last digit of integer
 * Description: prints the last of integer
 *
 * Return:always 0
 *
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

