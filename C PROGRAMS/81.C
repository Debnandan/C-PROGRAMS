#include <stdio.h>
int countvowels(char str[]);
int main()
{
    char str[20];
    printf("enter str");
    fgets(str, 20, stdin);
    printf("total vowels = %d", countvowels(str));
    return 0;
}
int countvowels(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}