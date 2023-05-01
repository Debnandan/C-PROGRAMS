#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    int rollno;
    float cgpa;
};
void printinfo(struct student s1);
int main()
{
    struct student s1 = {"debnandan", 19, 1111, 82.2};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1)
{
    printf("name = %s", s1.name);
    printf("\nage = %d", s1.age);
    printf("\nroll number = %d", s1.rollno);
    printf("\ncgpa = %.2f", s1.cgpa);
}