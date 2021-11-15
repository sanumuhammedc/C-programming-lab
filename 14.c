#include <stdio.h>

#define SIZE 5

int i;

void linearSearch(int arr[],int n,int data){
    int it=0;

    for(i=0;i<n;i++){
        it++;
        if(arr[i]==data){
            printf("\nYour rank is %d(by linear search)",(i+1));
            break;
        }
    }
    if(i==n){
        printf("\nmark is not ranked");
    }

    printf("\n Number of iritration in linear search = %d",it);

}

void binerySearch(int arr[],int n,int data){
    int low,high,mid;
    int position = -1,count = 0;

    low = 0;
    high = n-1;

    mid = (low+high)/2;
    while(low <= high){
        count = count+1;
        if(arr[mid]==data){
            position = mid;
            break;
        }else if(arr[mid]<data){
            high = mid-1;
        }else{
            low = mid+1;
        }
        mid = (low+high)/2;
    }

    if(position >0){
        printf("\n%d found at the %dth rank and number of comparision is %d(binery search)",data,(position+1),count);
    }else{
        printf("Candidate failed");
    }

}

int main(){
    int array[SIZE];
    int data;
    

   
    printf("Enter the sorted mark");
    for(i=0;i<SIZE;i++){
        scanf("%d",&array[i]);
    }

    
    printf("Enter the mark :");
    scanf("%d",&data);

    binerySearch(array,SIZE,data);
    linearSearch(array,SIZE,data);
    return 0;
}
