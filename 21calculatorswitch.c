/*Calculator(using switch)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char op;
    double num1,num2;

    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);

    printf("Enter two numbers :\n");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
        case '+' :
            {
                printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
                break;
            }
        
        case '-' :
            {
                printf("%lf-%lf=%lf\n",num1,num2,num1-num2);
                break;
            }
        
        case '*' :
            {
                printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
                break;
            }
        
        case '/' :
            {
                printf("%lf/%lf=%lf\n",num1,num2,num1/num2);
                break;

            }
        
        default :
            {
                printf("This is a basic calculator,so u can only +,-* and /");
            }
        
        getch();
    
        
    }
}