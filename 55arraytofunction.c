/*passing an array to function*/

#include<stdio.h>


void dis(int x[])
{
    int i;

    for(i=0;i<5;i++)
        {
            printf("%d ",x[i]);
        }
}

int main()
{
    int A[]={10,20,30,40,50};

    dis(A);
}

