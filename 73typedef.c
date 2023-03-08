/*typedef*/

#include<stdio.h>
#include<string.h>

//user defined
typedef struct computerengineering
{
    int id;
    float cgpa;
    char name[100];  
} cse;

int main()
{
    cse s1={7,3.5,"Bozo"};//computerengineering name replaced by cse
    //s1.id=7;
    //s1.cgpa=3.54;
    //strcpy(s1.name, "Bozo");

    //print
    printf("Student name:%s\n",s1.name);
    printf("Student ID:%d\n",s1.id);
    printf("Student name:%f\n",s1.cgpa);

}