/*sum of two int number and their average*/

#include<stdio.h>
#include<conio.h>

int main() 
{
     int n1,n2,sum ;
     float avg ;

   printf("Enter two integer numbers:");
   scanf("%d %d",&n1,&n2);

   sum= n1+n2 ;

   printf("The sum is: %d\n",sum);

     avg=(float)sum/2 ;   /*Any relation between 2 int is int...2 float is float etc..that is why using (float) before sum to change the sum into float number
                                       so the result will be in float..coz realtion between a floart(sum) and an int 2 is a float */

     printf("The average is : %f\n",avg);

     getch();

}
      
   