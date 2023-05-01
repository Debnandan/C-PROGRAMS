#include <stdio.h>
int main()
{
    int marks[10][10], x, y, i, j;
    printf("enter limit of x and y"); // x=row=student,y=column=marks
    scanf("%d%d", &x, &y);
    printf("enter marks");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d student %d subject marks = %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}