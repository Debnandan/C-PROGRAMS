#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        printf(" %d", i);
    }
    getch();
}