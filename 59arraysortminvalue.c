/*Array sorting 2 (min value in a array)*/

#include<stdio.h>

int main()
{
    int A[]={14,7,69,3,7,25,74};

    int min=A[0];

    for(int i=0;i<7;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    
    printf("%d",min);


}