#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	a = a - 1;
	while (a >= 0)
	{
		putchar(*(s + a));
		a--;
	}
	putchar('\n');
}
