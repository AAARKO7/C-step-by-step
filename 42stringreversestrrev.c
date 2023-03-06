/*String basic{string reverse 'strrev()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[]="I am the worst human alive";

    strrev(s1);

    printf("%s",s1);

    getch();
}