/*Area of triangle*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float base,height,area;

    printf("Base=");
    scanf("%f",&base);

    printf("Height=");
    scanf("%f",&height);

    area=(float)1/2 * base * height ;       /* 1/2=0.5 ..if we use 0.5 then we don't need to convert 1/2 into (float)..*/
    printf("Area= %f\n",area);

    getch();
}