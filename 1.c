#include <stdio.h>
int main(){
    //declaring variables
    int n,q,reminder=0,reverse=0;

    //getting input from user
    printf("Enter an integer number: ");
    scanf("%d",&n);
    q=n;

    //finding reverse of number
    while(q!=0){
        /*reminder=q%10;
        reverse=(reverse*10)+reminder;
        q=q/10;*/
    }

    //printing number and reversed number
    printf("\n\n=======================================\n\n");
    printf("Number entered: %d\n",n);
    printf("Reversed number: %d\n\n",reverse);
    printf("=======================================\n\n");

    //checking and printing wether number is palindrome or not
    if(n==reverse){
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome\n");
    }
    return 0;
}