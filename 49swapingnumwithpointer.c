/*swaping two numbers using pointer */

#include<stdio.h>
#include<conio.h>

int main()
{
    int x=10,y=20,temp;

    int *p1,*p2;

    p1=&x;
    p2=&y;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("x= %d\n",x);
    printf("y= %d\n",y);
    

    getch();

}