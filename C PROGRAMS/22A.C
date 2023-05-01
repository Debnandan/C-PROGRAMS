#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, factorial = 1, num;
    printf("enter number");
    scanf("%d", &num);
    while (i <= num)
    {
        factorial = factorial * i;
        i++;
    }
    printf("factorial= %d", factorial);
    getch();
}