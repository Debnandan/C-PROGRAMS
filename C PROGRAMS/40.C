#include <stdio.h>
#include <conio.h>
void printTable(int n);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printTable(n);
    getch();
}
void printTable(int n)
{
    int i, t = 1;
    for (i = 1; i <= 10; i++)
    {
        t = n * i;
        printf("\n%d", t);
    }
}
