#include <stdio.h>
#include <string.h>
typedef struct address
{
    int houseno;
    int block;
    char city[20];
    char state[20];
} add;
int main()
{
    add a[5];
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("enter address %d", i + 1);
        printf("\nenter house number");
        scanf("%d", &a[i].houseno);
        printf("enter block number");
        scanf("%d", &a[i].block);
        printf("enter city");
        scanf("%s", a[i].city);
        printf("enter state");
        scanf("%s", a[i].state);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\naddress %d", i + 1);
        printf("house number %d", a[i].houseno);
        printf(" block %d", a[i].block);
        printf(" city %s", a[i].city);
        printf(" state %s", a[i].state);
    }
    return 0;
}
