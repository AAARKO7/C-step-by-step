/*Area of Triangle of 3 diffrent line*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;

    printf("Enter the value of a:");
    scanf("%f", &a);

    printf("Enter the value of b:");
    scanf("%f", &b);

    printf("Enter the value of c:");
    scanf("%f", &c);

    s = (a+b+c)/2;

    area= sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("The area of the triangle is =%f", area);

    getch();

}