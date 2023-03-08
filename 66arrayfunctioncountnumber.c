/*Count or print odd or even of an array using function*/

#include<stdio.h>

//print odd 
void array1(int a[],int b[],int n)
{
    for(int i=0;i<7;i++)
    {
        if(a[i]%2!=0)
        {
            b[i]=a[i];
            printf("%d ",b[i]);
        }
    }
    printf("\n");
}

//count odd 
int array2(int a[],int n)
{
    int x=0;

    for(int i=0;i<7;i++)
    {
        if(a[i]%2!=0)
        {
            x++;
        }
    }
    return x;
}

int main()
{
    int a[7];
    int b[7];

    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }

    array1(a,b,7);
    int y=array2(a,7);

    printf("The number of odd number=%d\n",y);

    return 0;
}