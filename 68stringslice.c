/*string slicing...take a string and return a slided string from mindex n to m*/

#include<stdio.h>
#include<string.h>

void slice(char s[],int n,int m)
{
    char newstr[100];
    int j=0;

    for(int i=n;i<=m;i++,j++) // 2 loops together 
    {
        newstr[j]=s[i];
    }
    newstr[j]= '\0';

    puts(newstr);
}

int main()
{   
    int n,m;
    char s[100];

    scanf("%s",s);
    scanf("%d%d",&n,&m);

    slice(s,n,m);
}