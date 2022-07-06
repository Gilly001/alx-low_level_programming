#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
}

int main()
{
    print_alphabet();
    putchar('\n');
}
