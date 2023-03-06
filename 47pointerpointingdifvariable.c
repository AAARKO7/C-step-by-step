/*pointer pointing to diffrent variable*/

#include<stdio.h>
#include<conio.h>

int main()
{   
    int x=10,y=20,z=30;

    int *p;

    p=&x;
    printf("Value of x=%d\n",*p);

    p=&y;
    printf("Value of y=%d\n",*p);

    p=&z;
    printf("Value of z=%d\n",*p);


    getch();



}