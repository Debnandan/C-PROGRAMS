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
    struct student s1 = {"debnandan", 19, 1111, 82.2};
    struct student s2 = {"gulab", 20, 2222, 85.5};
    struct student s3 = {"anand", 18, 3333, 90.7};
    struct student *ptr1 = &s1;
    struct student *ptr2 = &s2;

    printf("roll number = %d", (*ptr1).rollno);
    printf("\nname = %s", (*ptr1).name);
    printf("\nage = %d", (*ptr1).age);
    printf("\ncgpa = %.2f", (*ptr1).cgpa);

    printf("\nroll number = %d", ptr2->rollno);
    printf("\nname = %s", ptr2->name);
    printf("\nage = %d", ptr2->age);
    printf("\ncgpa = %.2f", ptr2->cgpa);

    printf("\nroll number = %d", s3.rollno);
    printf("\nname = %s", s3.name);
    printf("\nage = %d", s3.age);
    printf("\ncgpa = %.2f", s3.cgpa);
    return 0;
}