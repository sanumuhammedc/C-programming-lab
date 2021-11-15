#include <stdio.h>
#include <stdlib.h>

int fib(int x)
{
    if(x<2)
        return x;
    else
        return fib(x-1)+fib(x-2);

}

int main(void) {
    int i,n;
    //Read the number of terms
    printf("Enter the number of terms to be printed: ");
    scanf("%d",&n);

    printf("\nThe series is as follows:\n");

    //loop for printing the fib function
    for(i=0;i<=n;i++)
    {
        printf("%d ",fib(i));

    }


}
