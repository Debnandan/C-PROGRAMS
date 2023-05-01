#include <stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 91;
    marks[0][2] = 92;
    marks[1][0] = 93;
    marks[1][1] = 94;
    marks[1][2] = 95;
    printf("%d", marks[0][0]);
    printf("%d", marks[0][1]);
    printf("%d", marks[0][2]);
    printf("%d", marks[1][0]);
    printf("%d", marks[1][1]);
    printf("%d", marks[1][2]);
    return 0;
}