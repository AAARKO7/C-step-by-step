/*Logical operator{check if the letter is vowel or not(logical OR)}*/

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch;

    printf("Enter a letter:");
    scanf("%c",&ch);

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("Your letter is vowel");
        }
    else
        {
            printf("your letter is consonant");
        }
    
    getch();

}