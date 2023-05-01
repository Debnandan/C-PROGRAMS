#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int count;
    printf("enter a name to count its length");
    fgets(name, 20, stdin);
    count = strlen(name);
    printf("length of name is %d", count - 1);
    return 0;
}