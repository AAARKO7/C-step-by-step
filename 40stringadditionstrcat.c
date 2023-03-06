/*String basic{string concatenation or addition 'strcat()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[]="I am a ";
    char s2[]="piece of shit";

    strcat(s1,s2);//or we can just write the 2nd string without mentioning the string exmp: strcat(s1,"piece of shit");...same output

    printf("%s",s1); //here we will only print the 1st string coz the 2nd string is added to the 1st one because of strcat() function






}