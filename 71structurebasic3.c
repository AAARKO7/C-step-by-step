/*initialization of structure in single line*/

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
    struct student s1={9,7.9,"Bozo"};

    //print
    printf("Student name:%s\n",s1.name);
    printf("Student ID:%d\n",s1.id);
    printf("Student name:%f\n",s1.cgpa);

    return 0;


}