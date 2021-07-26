#include<stdio.h>
int main(){
	int i, j, n;

	printf("Enter the limit upto which prime no has to be printed: ");
	scanf("%d", &n);

	for(i=2; i<n; i++){
		
		for(j=2; j<=i; j++){
			
			if(i % j == 0){
				break;
			}
			}
		if(i==j){
			printf("%d\n", i);	
		}
	}
}