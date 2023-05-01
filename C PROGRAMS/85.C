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
    struct student s1 = {"debnandan", 19, 1111, 82.5};
    struct student s2 = {"gulab", 20, 2222, 85.5};
    struct student s3 = {"anand", 18, 3333, 90.7};

    printf("roll number = %d", s1.rollno);
    printf("\nname = %s", s1.name);
    printf("\nage = %d", s1.age);
    printf("\ncgpa = %.2f", s1.cgpa);

    printf("\nroll number = %d", s2.rollno);
    printf("\nname = %s", s2.name);
    printf("\nage = %d", s2.age);
    printf("\ncgpa = %.2f", s2.cgpa);

    printf("\nroll number = %d", s3.rollno);
    printf("\nname = %s", s3.name);
    printf("\nage = %d", s3.age);
    printf("\ncgpa = %.2f", s3.cgpa);
    return 0;
}