/*if-else (student grade)*/

#include<stdio.h>
#include<conio.h>

int main()

{
    float num;

    printf("Enter your number :");
    scanf("%f",&num);

    if(num>=80)
        {
            printf("Congz you got 'A+'");
        }
    else if(num>=70)
        {
            printf("congz you got 'A'");
        }
    else if(num>=65)
        {
            printf("focus more you got 'A-'");
        }
    else if(num>=60)
        {
            printf("work hard you got 'B'");
        }
    else if(num>=50)
        {
            printf("you got 'C'");
        }
    else if(num>=40)
        {
            printf("you got 'D'");
        }
    else if(num>=33)
        {
            printf("you got 'E'");
        }
    else
        {
            printf("sorry you are fail");
        }
   
    getch();
}