/*Array sorting 3 (min  to max or min to max value)*/ // we also sort string in the same way

#include<stdio.h>

int main()
{
   int A[7]={14,69,3,7,25,74};

   int temp;

   for(int i=0;i<7;i++)
   {
        for(int j=i+1;j<7;j++)
        {
            if(A[i]>A[j]) // A[i]<A[j] for max to min 
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
   }

    for(int i=0;i<7;i++)
    {
        printf("%d ",A[i]);
    }
}