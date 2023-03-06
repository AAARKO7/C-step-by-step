/*String basic{string upper or lower case 'strupr() & strlwr()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[]="I cry when Angels deserves to die";

    strupr(s1); // strlwr() will lower case the whole string

    printf("%s",s1); 
}