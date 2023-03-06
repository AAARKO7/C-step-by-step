/*Addition or Subtraction*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int A[100][100],B[100][100],C[100][100];
    int i,j,nr,nc;

    printf("Enter the number of rows and colums:"); //row and colum input
    scanf("%d %d",&nr,&nc);


    printf("Enter elements of Matrix A:\n"); //matrix A input
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {   
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
            printf("\n");
    }

    printf("Enter elements of Matrix B:\n"); // Matrix B imput
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {   
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
            printf("\n");
    }

    printf("\nA= "); //matrix A print
    for(i=0;i<nr;i++)
    {   
        printf("\t");
        for(j=0;j<nc;j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
    }

     printf("\nB= "); // Matrix B print
    for(i=0;i<nr;i++)
    {   
        printf("\t");
        for(j=0;j<nc;j++)
        {
            printf("%d ",B[i][j]);
        }
            printf("\n");
    }

    for(i=0;i<nr;i++) //Addition or Subtraction
    {   
        for(j=0;j<nc;j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }
    
    }

     printf("\nA+B= "); // Matrix C print
    for(i=0;i<nr;i++)
    {   
        printf("\t");
        for(j=0;j<nc;j++)
        {
            printf("%d ",C[i][j]);
        }
            printf("\n");
    }

    getch();

}