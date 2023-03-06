/*Matrix multiplication*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int A[100][100],B[100][100],C[100][100];
    int i,j,r1,r2,c1,c2,k;
    int sum=0;

    printf("Enter rows and colums of matrix A:\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and colums of matrix B:\n");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2) //condition
    {
        printf("ERROR !! Column of matrix A is not equal to row of matrix B.\n");

        printf("Enter rows and colums of matrix A:");
        scanf("%d %d",r1,&c1);

        printf("Enter rows and colums of matrix B:");
        scanf("%d %d",&r2,&c2);
 
    }

        printf("Enter elements of Matrix A:\n"); //matrix A input
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {   
                printf("A[%d][%d]= ",i,j);
                scanf("%d",&A[i][j]);
            }
                printf("\n");
        }

        printf("Enter elements of Matrix B:\n"); //matrix B input
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {   
                printf("B[%d][%d]= ",i,j);
                scanf("%d",&B[i][j]);
            }
                printf("\n");
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {   
                
                for(k=0;k<c1;k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                 C[i][j]=sum;
                 sum=0;
                    
            }
        }

        printf("\nA= "); //matrix A print
        for(i=0;i<r1;i++)
        {   
            printf("\t");
            for(j=0;j<c1;j++)
            {
                printf("%d ",A[i][j]);
            }
                printf("\n");
        }

        printf("\nB= "); //matrix B print
        for(i=0;i<r2;i++)
        {   
            printf("\t");
            for(j=0;j<c2;j++)
            {
                printf("%d ",B[i][j]);
            }
                printf("\n");
        }

       

        printf("\nA*B= "); // Matrix C print
        for(i=0;i<r1;i++)
        {   
            printf("\t");
            for(j=0;j<c2;j++)
            {
               printf("%d ",C[i][j]);    
            }
            printf("\n");
                
        }

        getch();

}