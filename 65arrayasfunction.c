/*Arrays as function Argument*/

#include<stdio.h>

void array(int a[],int n)
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    array(a,5);

    return 0;
}