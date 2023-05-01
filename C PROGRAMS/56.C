#include <stdio.h>
int main()
{
    char *a, *b;
    char i;
    *a = 'A';
    *b = 'Z';
    for (i = *a; i <= *b; i++)
    {
        printf("  %c", i);
    }
    return 0;
}