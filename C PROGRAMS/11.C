#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter marks ");
    scanf("%d", &a);
    if (a >= 90)
        printf("grade = A+");
    else if (a >= 80)
        printf("grade = A");
    else if (a >= 70)
        printf("grade = B");
    else if (a >= 60)
        printf("grade = C");
    else if (a >= 50)
        printf("grade = d");
    else
        printf("grade = fail");
    getch();
}
