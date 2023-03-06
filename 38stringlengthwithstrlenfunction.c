/*String basic{length of sting using library functing 'strlen()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h> //we need this header file to use 'strlen()'

int main()
{
    char S[]="I am the most shittest person in the world";

    int x=strlen(S);

    printf("%d",x);

    getch();
}