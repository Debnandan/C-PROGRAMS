#include <stdio.h>
#include <conio.h>
void main()
{
    int num, num1, b = 0, a;
    printf("enter numbers");
    scanf("%d", &num);
    num1 = num;
    while (num > 0)
    {
        a = (num % 10);
        num = num / 10;
        b = b + a * a * a;
        printf("\n%d", b);
    }
    printf("\narmstrong = %d", b);
    if (b == num1)
        printf("\ngiven number is amrstrong number");
    getch();
}