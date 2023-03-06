/*Conditional operator(basic)...check the large number*/

#include<stdio.h>
#include<conio.h>

int main()
{   
    int n1,n2,large;
    
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);

    large= (n1>n2) ? n1:n2 ;

    printf("The large number is: %d\n",large);

    getch();


}