#include "main.h"
#include <string.h>

void puts2(char *str) {
    char j[100];
    int i;
    str = &j;
    
    
    for (i = 0; i < strlen(j); i++)
    {
        printf("%c", *str++);
    }
    putchar('\n');
    return 0;
}#include "main.h"
#include <string.h>

void puts2(char *str) {
    char j[100];
    int i;
    str = &j;
    
    
    for (i = 0; i < strlen(j); i++)
    {
        printf("%c", *str++);
    }
    putchar('\n');
    return 0;
}
