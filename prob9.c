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