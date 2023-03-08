/*passing structure to function*/

//we need to define the structure 1st..if we use a function 1st in syntax it won't work..

#include<stdio.h>
#include<string.h>

//user defined
struct student
{
    int id;
    float cgpa;
    char name[100];  
};

void printinfo(struct student s1)
{
    //print
    printf("Student name:%s\n",s1.name);
    printf("Student ID:%d\n",s1.id);
    printf("Student name:%f\n",s1.cgpa);

}

int main()
{
    struct student s1={9,7.9,"Bozo"};

    printinfo(s1);

    return 0;
}