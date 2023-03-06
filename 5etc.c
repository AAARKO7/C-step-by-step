/*+,-,*,/,%(reminder or vag sesh) of any number*/

#include<stdio.h>
#include<conio.h>

    int main()
    {
        int n1,n2,result;

        printf("Enter two numbers :");
        scanf("%d %d",&n1,&n2);

        result=n1+n2;
        printf("The sum = %d\n",result);

        result=n1-n2; 
        printf("The sub = %d\n",result);

        result=n1*n2; 
        printf("The mult = %d\n",result);
        
        result=n1/n2;
        printf("The div = %d\n",result);

        result=n1%n2;
        printf("The reminder = %d\n",result);

        getch();

    }