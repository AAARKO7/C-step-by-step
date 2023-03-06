/*loop basic(while)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;

    while(i<=10)    /*in while loop 1st u declare value..then start the loop with condition then u print..last u say inc/decriment*/
        {
            printf("%d\n",i);
            i++; 
        }
    getch();
}