#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase then uppecase\n
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    
    for (n = 'a'; n <= 'z'; n++)
    {
        putchar(n);
    }
    for (n = 'A'; n <= 'Z'; n++)
    {
        putchar(n);
    }
    putchar('\n');
    return (0);
}
