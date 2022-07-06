#include '

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
    int a;

    for (a = 'a'; a <= 'z'; a++)
    {
        _putchar(a);
    }
    _putchar('\n');
}
