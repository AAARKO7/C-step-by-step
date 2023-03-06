/*input 2 simple matrix*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int A[3][4],B[3][4];
    int i,j;

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {   
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
            printf("\n");
    }
    printf("A= ");
    for(i=0;i<3;i++)
    {   
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
    }

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {   
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
            printf("\n");
    }
    printf("B= ");
    for(i=0;i<3;i++)
    {   
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
        }
            printf("\n");
    }

       
}