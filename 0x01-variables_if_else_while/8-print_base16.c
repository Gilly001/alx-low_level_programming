#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
