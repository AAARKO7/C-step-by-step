/*Decimal to octal or hexa
Octal or hexa to Decimal
octal to hexa or hexa to octal*/

#include<stdio.h>
#include<conio.h>

int main()
{
   int num;

   printf("Enter the decimal number =");

   scanf("%o",&num);

   printf("octal number = %d",num);

   getch(); 
}

/*For hexa use %x insted of %o...means octal= %o, hexa=%x
AND for octal or heax to deimal do reverse in print and scan
AND for octal to hexa or hexa to octal just change the variable*/