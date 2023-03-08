/*structure define and declare(basic)*/

#include<stdio.h>
#include<string.h>

//user defined
struct student
{
    int id;
    float cgpa;
    char name[100];  
};

int main()
{
    struct student s1;

    s1.id=7;
    s1.cgpa=3.9;
    //s1.name="Arko";

    strcpy(s1.name,"Arko");

    //print
    printf("Student name:%s\n",s1.name);
    printf("Student ID:%d\n",s1.id);
    printf("Student name:%f\n",s1.cgpa);

    return 0;
}