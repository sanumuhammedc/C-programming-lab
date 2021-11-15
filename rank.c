
#include <stdio.h>

int array[50][2],count_lin=0,count_bin=0,n,search,pos=-1;


void linear_search(){
    
    pos = -1;
    for(int i=0;i<n;i++){
		count_lin++;
        if (search == array[i][1]){
            pos=i;
            break;
        }
    }
     pos !=-1 ?  printf("\nThe rank of student with mark  %d is %d",search,pos+1):
                printf("\nThe student not found in the list ");
    pos=-1;
    
}

int binary_search(int low,int upper){
	
    if (low > upper) return 0;
    count_bin++;
    int mid = (low+upper)/2;
    if (search == array[mid][1]){
        pos = mid;
        printf("\nThe rank student with mark number %d is %d ",search,pos+1);
        return 0;
        
    }
    if (search < array[mid][1])
        binary_search(low,mid);
    else
        binary_search(mid+1,upper);
    return 0;
}

int main()
{
    
    printf("Enter the  number of students --> ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the reg number of student %d--> ",i+1);
        scanf("%d",&array[i][0]);
        printf("Enter the mark of student %d --> ",i+1);
        scanf("%d",&array[i][1]);
        
    }
   
        printf("\nEnter the rmark to  be searched -->");
        scanf("%d",&search);
        printf("\n linear_search ");
        linear_search();
        printf("\nthe number of comparison in linear search %d",count_lin);
        printf("\nbinary search");
        binary_search(0,n-1);
		printf("\nthe number of comparison in binary search %d",count_bin);
        if(pos==-1) printf("\nThe student not found in the list ");
    return 0;
}

