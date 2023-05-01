#include <stdio.h>
typedef struct bankaccount
{
    char name[100];
    int accountno;
} acc;
int main()
{
    acc a = {"debnandan", 1111};
    printf("name of bank holder = %s\n", a.name);
    printf("account number = %d", a.accountno);
    return 0;
}