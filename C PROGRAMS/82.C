#include <stdio.h>
void check(char str[], char ch);
int main()
{
    char str[] = "helloworld";
    char ch = 'l';
    check(str, ch);
}
void check(char str[], char ch)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
    }
    printf("character is not presemt");
}