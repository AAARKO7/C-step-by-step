/*increment & decrement(unary operator)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    i=2;

    printf("i=%d j=%d\n",i,j=++i);
   
    printf("i=%d j=%d\n",i,j=i++);

    printf("i=%d j=%d\n",i,j=i--);

    printf("i=%d j=%d\n",i,j=--i);


    getch();





}