/*converting lowercase letter to uppercase letter
with library function*/

#include<stdio.h>

int main()
{
  char lower,upper;

  printf("Enter lowercase letter:");
  
  scanf("%c",&lower);
  
  upper = toupper(lower);

  printf("uppercase letter is: %c",upper);
}

/*To convert uppercase to lowercase just use tolower(upper)*/