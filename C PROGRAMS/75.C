#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("enter s1");
    fgets(s1, 20, stdin);
    printf("enter s2");
    fgets(s2, 20, stdin);
    if (strcmp(s1, s2) == 0)
    {
        printf("both strings is same");
    }
    else
    {
        printf("strings are not same");
    }
    return 0;
}