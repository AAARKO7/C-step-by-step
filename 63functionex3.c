/*sum of first n natural numbers using recursion(function)*/

#include<stdio.h>

int sum(int n);

int main()
{
    printf("Sum is: %d",sum(5));
}

//recursive function
int sum(int n)
{   
    if(n==1)
    {
        return 1;
    }
    int x=sum(n-1); //sum of 1 to n
    int y=x+n; //total sum

    return y;
}