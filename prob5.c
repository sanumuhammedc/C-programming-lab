#include<stdio.h>
#include<math.h>
int main(){

    float unit,amount,finalAmount,tax;
    int customerNumber, fixedCharge = 40, flask = 0 ;
    while(flask == 0){
        printf("==============================================\n\n");
        printf("Enter Costumer Number: ");
        scanf("%d",&customerNumber);

        printf("Enter energy consumption: ");
        scanf("%f",&unit);
        printf("==============================================\n\n");

        if(unit <= 0){
            printf("===========================================================================\n");
            printf("Entered energy consumption is not possible please try again\n");
            printf("===========================================================================\n");

            printf("\n\n==============================================\n\n");
            printf("Re-enter energy consumption: ");
            scanf("%f",&unit);
            printf("\n\n==============================================\n\n");

        }

        if(unit >0 && unit <= 100){
            amount = unit * 3.5;
            

        }

        if(unit >= 101 && unit <= 200){
            amount = (unit - 100)*4 + 100*3.5;
            
        }

        if(unit >= 201 && unit <= 500){
            
            amount = (unit - 200)*5 + 100*3.5 +  100*4;
        }

        if(unit >= 501){
            amount = (unit - 500)*8 + 100*3.5 + 100*4 + 300*5;
        }
        
         tax = amount*0.12;    
         finalAmount = amount + tax + fixedCharge;

        printf("\n\n*****************************************\n");
        printf("=========================================\n");
        printf("             Electricity bill            \n");
        printf("=========================================\n\n");
        printf(" Customer number: %d\n",customerNumber);
        printf(" Energy consumption: %f Unit\n", unit);
        printf(" Energy charge: %f/-\n", amount);
        printf(" Fixed Charge = %d/-\n",fixedCharge);
        printf(" Tax = %f/-\n", tax);
        printf(" Total Payable Amount= %f/-\n\n", finalAmount);
        printf("*****************************************\n");

        printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
        printf("x  Enter 0 to continue                     x\n");
        printf("x  Enter 1 to Exit                         x\n");
        printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
        printf("Choice: ");
        scanf("%d", &flask);
    }
    if(flask == 1){
        printf("\n\n*****************************************\n");
        printf("               Thank you                 \n");
        printf("*****************************************\n");
    }

    return 0;
}