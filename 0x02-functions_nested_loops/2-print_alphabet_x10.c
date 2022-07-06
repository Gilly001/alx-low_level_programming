#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabetx10,
 * in lowecase followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
    int a = 0;
    int b;
    
    while (a < 10)
    {
        for (b = 'a'; b <= 'z'; b++)
        {
            _putchar(b);
        }
        a++;
    }
    _putchar('\n');
}
