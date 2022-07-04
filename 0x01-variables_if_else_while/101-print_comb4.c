#include <stdio.h>
#include <unistd.h>
/**
 * main - Entyr point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
		    for (p = '0'; p <= '9'; p++)
		    {
			if (n < m && m < p)
			{
				putchar(n);
				putchar(m);
				putchar(p);

				if (n != '8' || (n == '8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
