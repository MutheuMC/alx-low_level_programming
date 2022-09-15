#include "main.h"

/**
 * main: print the character '_' n times
 * Description: Draw a line using '_'
 *
 */
void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
