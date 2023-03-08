/*Array of structure*/

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
    struct student cse[100];
    cse[0].id=7;
    cse[0].cgpa=3.54;
    strcpy(cse[0].name, "Bozo");

    //print
    printf("Student name:%s\n",cse[0].name);
    printf("Student ID:%d\n",cse[0].id);
    printf("Student name:%f\n",cse[0].cgpa);

    return 0;
}