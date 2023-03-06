/*Array sorting 1 (max value in a array)*/

#include<stdio.h>

int main()
{
    int A[]={14,7,69,3,7,25,74};

    int max=0;

    for(int i=0;i<7;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    
    printf("%d",max);


}
