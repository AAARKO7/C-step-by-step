/*Logical operator{3 number and display maximum (logical AND)}*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float num1,num2,num3 ;

    printf("Enter three numbers:\n");
    scanf("%f %f %f",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        {
            printf("Large number = %f\n",num1);
        }
    else if(num2>num1 && num2>num3)
        {
            printf("Large number = %f\n",num2);
        }
    else if(num3>num1 && num3>num2)
        {
            printf("Large number =%f\n",num3);
        }
    else
        {
            printf("The numbers are equal");
        }
    
    getch();

}