/*string salting... Find the salted from of password entered by user if the salt is "123" & added at the end*/

#include<stdio.h>
#include<string.h>


void salting(char password[])
{
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password); //copys passowrd to newpass

    strcat(newpass,salt); //adds salt at the end of the newpass

    puts(newpass);
}


int main()
{
    char password[100];
    scanf("%s",password);

    salting(password);
}