/*String basic{string copy 'strpy()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char S[]="I am the worst";
    char A[20];

    strcpy(A,S);

    printf("%s",A);

    getch();
}