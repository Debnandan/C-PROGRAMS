#include <stdio.h>
int main()
{
    char name[100];
    int age;
    float cgpa;
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    printf("enter student name");
    scanf("%s", name);
    printf("enter age");
    scanf("%d", &age);
    printf("enter cgpa");
    scanf("%f", &cgpa);
    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f", cgpa);
    fclose(fptr);
    return 0;
}
