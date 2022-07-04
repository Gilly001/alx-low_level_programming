#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print combinations
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
