/*array 2-D basic(input-output)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int A[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {   
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
            printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
    }

        getch();


}