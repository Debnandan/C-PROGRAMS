#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
char password[100];
printf("enter password");
scanf("%s",&password);
salting(password);
return 0;
}
void salting(char password[])
{
char newpass[100],salt[]="123";
strcpy(newpass,password);
strcat(newpass,salt);
printf("password is %s",newpass);
}
