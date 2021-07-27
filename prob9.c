/*
 1) start
 2) get number of rows to be printed
 3) for i=0 and i < no of row
        *for j = 0 and j<=i
        * if j equal to 0 or i equal to zero number=1
        * else number = num * (i - j + 1)/j
        * print number
 4) stop
 */

#include<stdio.h>
int main(){
	int i, j, limit, num, space;

	printf("Enter no of rows to be printed: ");
	scanf("%d", &limit);

	for(i=0; i< limit; i++){

          for (space = 1; space <= limit - i; space++){
         printf("  ");
            }

		for(j=0; j<=i; j++){
          
            if(j == 0 || i == 0){
                num = 1;  
            }
            else{
                num = num * (i - j + 1)/j ;    
            }
            printf("%4d", num);
		}
		printf("\n");
	}

	return 0;
}