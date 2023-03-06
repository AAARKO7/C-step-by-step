/*Array basic {searching a number(linear search)}*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num[]={10,20,30,40,50,60,70,80,90};
    int val,pos=-1,i;

    printf("Enter the value:");
    scanf("%d",&val);

    for(i=0;i<9;i++)
    {
        if(val==num[i])
            {
                pos=i+1;

                break;
            }
    }

    if(pos==-1)
    {
        printf("Value not found");
    }
    else
    {
        printf("Value is found at %d position",pos);
    }
    getch();
}

