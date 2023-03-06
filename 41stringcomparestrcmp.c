/*String basic{string compare 'strcmp()'}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[]="Arko Adhikary";
    char s2[]="is the most shameless person in the world";

   int x= strcmp(s1,s2); // strcmp will compare and return 0 if it is equal so we will use a int variable to store that 0

   if(x==0)
   {
        printf("Strings are equal");
   }

   else
   {
        printf("Strings are not equal");
   }

   getch();

}