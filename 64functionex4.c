/*factorial n using recursion(function)*/

#include<stdio.h>

int fact(int n);

int main()
{
    printf("factorial is: %d",fact(5));
}

//recursive function
int fact(int n)
{   
    if(n==1)
    {
        return 1;
    }
    int x=fact(n-1);
    int y=x*n;

    return y;
}