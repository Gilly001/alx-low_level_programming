#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks for signs
 * Return: 1 if true. 0 if false
 */

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return(1);
    }
    else if (n = 0)
    {
        _putchar('0');
        return(0);
    }
    else if (n < 0)
    {
        _putchar('-');
        return(-1);
    }
}
