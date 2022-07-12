#include "main.h"
#include <stdio.h>
#include <string.h>
 
void main()
{
   char str1[20], rev;
   int a, b,i;

   a = strlen(str1);
   b = a-1;
    
for(i = 0; i < b; i++)
       {
       rev = str1[i];
       str1[i] = str1[b];
       str1[b] = rev;
       b--;
   }
 
   printf("Reversed string is: %s\n", str1);
}
