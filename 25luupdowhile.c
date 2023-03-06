/*loop basic(do while)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;    //initialization

    do 
    {
        printf("%d\n",i);
        i++; //incriment
    }
    
    while(i<=10); // condition

    getch();
}