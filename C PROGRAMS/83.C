#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.rollno = 28;
    strcpy(s1.name, "debnandan");
    s1.age = 21;
    s1.cgpa = 82.8;
    printf("roll number = %d", s1.rollno);
    printf("\nname = %s", s1.name);
    printf("\nage = %d", s1.age);
    printf("\ncgpa = %.2f", s1.cgpa);
    return 0;
}