/*String basic(display string crctr-wise)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char S[]="I am a dumb ass";
    int i=0;

    while(S[i]!='\0')
    {
        printf("%c\n",S[i]);
        i++;
    }

    getch();
}