#include <stdio.h>
#include <conio.h>
void main()
{
    int num, num1, rev = 0;
    printf("enter numbers");
    scanf("%d", &num);
    num1 = num;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("reverse = %d", rev);
    if (rev == num1)
        printf("\nno. is palindrome");
    else
        printf("\nno. is not palindrome");
    getch();
}