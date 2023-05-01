#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n, cube;
    printf("enter a number ");
    scanf("%d", &n);
    cube = pow(n, 3);
    printf("cube of the number = %d", cube);
    getch();
}