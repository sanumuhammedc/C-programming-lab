//programme to sort height of students
/*
     Algorithm
  1) start
  2) get limit of array from user
  3) for i=0 to limit-1
        3.1)get height of students
  4) for i=0 to limit-1
        4.1)for j=0 to limit-1
        4.2)if height[i] > height[j]
        4.3)swap heights
  5) print mean
  6) print median
  7) print minimum of sorted height 
  8) print maximum of sorted height
  9) stop    
*/
//programme to find mean, mode, maximum value and minimum value of height  
#include <stdio.h>
int main(){
    float list[45], mean,sum=0,median,temp;
    int limit,i,j;
    printf("Enter limit of list: ");
    scanf("%d",&limit);
    printf("\nEnter height of %d students in centimeters:\n",limit);
    for(i=0;i<limit;i++){
        printf("%d) ",i+1);
        scanf("%f",&list[i]);
    }
    //sorting
    for(i=0;i<limit-1;i++){
        for(j=0;j<limit-1-i;j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    
    
    for(i=0;i<=limit;i++){
        sum+=list[i];
    }
    mean=sum/limit;
    if(limit%2==0){
        median=list[(limit-1)/2];
    }
    else{
        median=(list[(limit-1)/2]-1+list[(limit-1)/2]+1)/2;
    }
    printf("=========================================================\n\n");
    printf("Mean = %f\n",mean);
    printf("Median = %f\n",median);
    printf("Maximum value = %f\n",list[limit-1]);
    printf("Minimum value = %f\n\n",list[0]);
    printf("=========================================================\n\n");
    return 0;
}