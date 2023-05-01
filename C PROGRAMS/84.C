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
    struct student s1[3];
    s1[0].rollno = 1;
    strcpy(s1[0].name, "debnandan");
    s1[0].age = 19;
    s1[0].cgpa = 82.8;
    printf("roll number = %d", s1[0].rollno);
    printf("\nname = %s", s1[0].name);
    printf("\nage = %d", s1[0].age);
    printf("\ncgpa = %.2f", s1[0].cgpa);
    s1[1].rollno = 2;
    strcpy(s1[1].name, "gulab");
    s1[1].age = 19;
    s1[1].cgpa = 85.5;
    printf("\nroll number = %d", s1[1].rollno);
    printf("\nname = %s", s1[1].name);
    printf("\nage = %d", s1[1].age);
    printf("\ncgpa = %.2f", s1[1].cgpa);
    s1[2].rollno = 3;
    strcpy(s1[2].name, "amit");
    s1[2].age = 19;
    s1[2].cgpa = 90.5;
    printf("\nroll number = %d", s1[2].rollno);
    printf("\nname = %s", s1[2].name);
    printf("\nage = %d", s1[2].age);
    printf("\ncgpa = %.2f", s1[2].cgpa);
    return 0;
}