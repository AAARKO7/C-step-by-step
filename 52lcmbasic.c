#include<stdio.h>

int main()
{
    int num1,num2,cmn=1;

    printf("Enter 2 numbers:");

    scanf("%d%d",&num1,&num2);

    while(1)
    {
        if(cmn%num1==0 && cmn%num2==0)
        {
            break;
        }
        cmn++;
    }

    printf("LCM=%d",cmn);


    
}