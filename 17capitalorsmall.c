/*IS the letter Capital or Small*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char letter;

    printf("Enter your letter:");
    scanf("%c",&letter);

    if(letter>='A' && letter<='Z')
        {
            printf("This is a Capital letter");
        }
    else if(letter>='a' && letter<='z')
        {
            printf("This is a small letter");
        }
    else
        {
            printf("You should input an alphabet dummy");
        }
    
    getch();
}