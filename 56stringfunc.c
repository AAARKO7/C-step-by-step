/*passing a string to function*/

#include<stdio.h>


void dis(char x[])
{
    int i=0;

    while(x[i]!='\0')
    {
        printf("%c\n",x[i]);
        i++;
    }
}

int main()
{
    char s[]= "INEXORABLE";

    dis(s);
}


