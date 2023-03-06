#include<stdio.h>

int fun(int y)
{   
    int sum;
    
    if(y==1)
    {
        return 1;
    }

    else
    {
        return sum=y*fun(y-1);
    }
     
}


int main()
{
    int x;

    scanf("%d",&x);

    int res= fun(x);

    printf("%d",res);

}


