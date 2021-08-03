/* 
    Algorithm
      
  1) start
  2) assign sum = 0
  3) while number !=0
       *get a number from user
       *number % 10
       *add reminder got in above step to sum
       * number = number/10
   4) print sum
   5)ask user wether continue or not
   6)if user ask to continue, repeat above steps     
   7)else stop
   */ 
   
  //programme to find sum of digits in an intiger 
#include <stdio.h>
int main() {
    int num, sum=0, p, r, flask = 0;

    while(flask == 0){
        //get a number from user
        printf("\n\n======================================\n\n");
        printf("Enter an intiger :");
        printf("\n\n======================================\n\n");
        scanf("%d", &num);
        printf("\n\n======================================\n\n");
        r = num; // for retaining entered number 
        //if user input number other than 0 then programme to find sum of digits
        if(num < 0){
            num *=-1;
        }
        while(num!=0){
            p = num % 10; //to find individual digit 
            sum += p; //to find sum of digits 
            num /= 10;//to remove added digit from number
        }
        //print the sum of digits
    printf("_________________________________________________");
    printf("\n\nSum of digits of %d = %d\n\n", r, sum);
    printf("_________________________________________________\n\n");

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
