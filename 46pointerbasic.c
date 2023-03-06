/*pointer basic declaration and output*/

// we need to use same data type for both variable and pointer variable
#include<stdio.h>

int main()
{   
    
    int x=7;

    int *p;     // Declaration of pointer variable...(* must before pointer)

    p=&x;       // here p variable pointing the address of x...

    printf("Value of x=%d\n",x);
    
    printf("Address of X=%d\n",&x);         // %u can be use..coz it means unsigned numbers..positive numbers i mean...

    printf("Value of pointer p=%d\n",p);    //prints the address of x, coz the address of x is the value of pointer p...

    printf("Address of pointer p=%d\n",&p);  //prints address of pointer p....

    printf("Content of pointer p=%d\n",*p);//prints the value of x..Means the value of the variable pointed in the pointer to be exact







}