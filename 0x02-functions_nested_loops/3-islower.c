#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{   
    int a;

    for (a = 'a'; a <= 'z'; a++)
    {
    /* refer int c*/
        if (c == a)
        {
            return (1);
        }
    }
    return (0);
}
