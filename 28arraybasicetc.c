/*Array basic 1-D(input,output,sum,avarage etc)*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int a[5],sum=0,i;

    printf("Enter five numbers:\n");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=4;i++)
    { 
        sum=sum+a[i];   
    }
        printf("sum=%d\n",sum);
        printf("average= %f",(float)sum/5);

    getch();
}