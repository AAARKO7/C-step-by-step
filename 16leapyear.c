/*Is the year, leap year or not*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;

    printf("Enter the year:");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap year");
    }

    else if(year%4==0 && year%100!=0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    getch();
}