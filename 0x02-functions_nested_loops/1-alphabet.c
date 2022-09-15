#include<stdio.h>

/**
 * main- prints alphabet in lowercase
 *
 * Description: A program that prints alphabet in lowercas
 *
 * Return: Success(0)
 *
 */
void print_alphabet(void){
	char alpha;

	alpha='a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
		_putchar('\n');


}
