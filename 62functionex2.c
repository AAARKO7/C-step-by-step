/*print table of a number using function*/

#include<stdio.h>

 void table(int n);

 int main()
 {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    table(n);
 }

 void table(int n)
 {
   for(int i=1;i<=10;i++)
   {
      printf("%dX%d=%d\n",n,i,n*i);
   }
 }
