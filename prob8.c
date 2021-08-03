/*
   Algorithm
 1) start
 2) get range from user
 3) for i=2; i < input
       *for j=2 and j<=i
	      *if i % j is zero, break
		  *if i is equal to j print i
 4) repeat upto printing last prime number
 5) stop		  	  
   */

  //programme to print prime numbers upto entered limit
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
	return 0;
}