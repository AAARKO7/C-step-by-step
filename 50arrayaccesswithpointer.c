/*access array with pointer */

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,a[5]={10,20,30,40,50};

    int *p;

    p=&a[0];

    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);

        p++;
    }

    getch();
}