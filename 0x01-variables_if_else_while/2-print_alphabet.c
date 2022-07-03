#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    
    for (n = 'a'; n <= 'z'; n++)
    {
        putchar(n);
    }
    putchar('\n');
    return 0;
}
