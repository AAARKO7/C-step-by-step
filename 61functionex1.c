/*Returning calculation(sum,sub etc) of two numbers using functions*/

#include<stdio.h>

//if we want to use main function 1st then we need to declear other function names 1st then write main function then other fuctions.

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    int s=sum(a,b);

    printf("The sum is: %d\n",s);
}
