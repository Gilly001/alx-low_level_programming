#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
int main(void)
{
	int n, m;

	m = 0;
	
	while (m < 10)
	{
	    for (n = 'a'; n <= 'z'; n++)
	    {
	        _putchar(n);
	    }
	    m++;
	    _putchar('\n');
	}
	return (0);
}
