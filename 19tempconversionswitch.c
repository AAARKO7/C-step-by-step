/*Temperature conversion(using switch)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;
    float C,F,K;


    printf("Temperature Conversion Menu :\n");
    printf("1. Celsius to Farhinete\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Farhinete to Celsius\n");
    printf("4. Farhinete to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Farhinete\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
            case 1:
        {
                printf("Enter Celsius Temperature:\n");
                scanf("%f",&C);
                F=(C*1.8)+32;
                printf("The Temperature in Farhinete is : %f\n",F);
             break;
       }
           
            case 2:
        {       
                 printf("Enter Celsius Temperature:\n");
                scanf("%f",&C);
                K=C+273.15;
                printf("The Temperature in Kelvin is : %f\n",K);
             break;
       }

              case 3:
        {
                printf("Enter Farhinete Temperature:\n");
                scanf("%f",&F);
                C=(F-32)/1.8;
                printf("The Temperature in Celsius is : %f\n",C);
             break;
        }
              case 4:
        {
                printf("Enter Farhinete Temperature:\n");
                scanf("%f",&F);
                K=(F-32)*5/9+273.15;
                printf("The Temperature in Kelvin is : %f\n",K);
             break;
         }

                  case 5:
        {
                printf("Enter Kelvin Temperature:\n");
                scanf("%f",&K);
                C=K-273.15;
                printf("The Temperature in Celsius is : %f\n",C);
             break;
         }
             case 6:
        {
                printf("Enter Kelvin Temperature:\n");
                scanf("%f",&K);
                F=(K-273.15)*1.8+32;
                printf("The Temperature in  is Farhinete: %f\n",F);
             break;
         }


            default:
                printf("Are you dumb?");
}

    getch();

}



            
            
    

        

