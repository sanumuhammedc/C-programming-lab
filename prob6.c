#include <stdio.h>
#include <stdlib.h>

int main() {
   int choice, num1, num2, result, flask = 0;

   while(flask == 0){

      //list of operations

      printf("\n\n======================================\n\n");
      printf("||** Welcome to simple calculator **||\n\n");
      printf("|| Choose the operation to be done  ||\n");
      printf("|| 1)Addition                       ||\n");
      printf("|| 2)Substraction                   ||\n");
      printf("|| 3)Multiplication                 ||\n");
      printf("|| 4)Division                       ||\n");
      printf("|| 5)Exit !!                        ||\n\n");
      printf("======================================\n\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);
      printf("\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");

      //switch for respective selections

      switch(choice){
          case 1:
          printf("\n\nEnter 1st number : ");
          scanf("%d", &num1);
          printf("Enter 2nd number : ");
          scanf("%d", &num2);
          result = num1+num2;
          printf("\n\n**************************************\n");
          printf("%d + %d = %d\n", num1, num2, result);
          printf("**************************************\n");
          break;
          
          case 2:
          printf("\n\nEnter 1st number : ");
          scanf("%d", &num1);
          printf("Enter 2nd number : ");
          scanf("%d", &num2);
          result = num1-num2;
          printf("\n\n**************************************\n");
          printf("%d - %d = %d\n", num1, num2, result);
          printf("**************************************\n");
          break;
          
          case 3:
          printf("\n\nEnter 1st number : ");
          scanf("%d", &num1);
          printf("Enter 2nd number : ");
          scanf("%d", &num2);
          result = num1*num2;
          printf("\n\n**************************************\n");
          printf("%d x %d = %d\n", num1, num2, result);
          printf("**************************************\n");
          break;
          
          case 4:
          printf("\n\nEnter 1st number : ");
          scanf("%d", &num1);
          printf("Enter 2nd number : ");
          scanf("%d", &num2);
          result = num1/num2;
          printf("\n\n**************************************\n");
          printf("%d ÷ %d = %d\n", num1, num2, result);
          if(num1%num2!=0){
            printf("reminder = %d\n", num1%num2);
          }
          printf("**************************************\n");
          break;
          
          case 5:
          printf("\n\n~~~~Thank you~~~~");
          exit(0);
          break;
          
          default:
          printf("\n\noops you have selected wrong option, try again");
      }

      printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
      printf("   Enter 0 to continue\n");
      printf("   Enter 1 to exit\n");
      printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
      printf("Choice: ");
      scanf("%d", &flask);
   }
    if(flask == 1){
      printf("\n\n~~~~Thank you~~~~");
    }

    return 0;
}