/*String basic(input output)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char S[50];

    printf("Enter your full name:");
    gets(S); //using gets() as input coz scanf can't read 'space'!!

    printf("Is your name :%s ?",S);

    getch();
}