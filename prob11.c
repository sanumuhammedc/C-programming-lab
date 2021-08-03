//programme for matrix addition and multiplication
/*
     Algorithm
  1)start
  2)get order of 2 matrices
  3)get elements of matrices
  4)if row of matrix1==row of matrix2
      4.1)add the matrices
      4.2)print the result
  5)if column of matrix1==row of matrix 2
      5.1)multiply matrix 1 and 2
      5.2)print the result
  6)if column of matrix2==row of matrix1
      6.1)multiply matrix 2 and 1
      6.2)print the result
   8)stop   

*/

//programme to add and multiply given matrix
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10],product[10][10],arow,acolumn,brow,bcolumn,i,j,k,value;
    //properties of 1st matrix
    printf("Enter order of 1st matrix in row x column format no need of space in between: ");
    scanf("%dx%d",&arow,&acolumn);
    while(arow>10 ||acolumn>10){
        printf("oops...maximum possible order is 10 x 10, Enter order again in row x column format no need of space in between: ");
        scanf("%dx%d",&arow,&acolumn);
    }
    
//input for 1st matrix
    printf("\nEnter elements of 1st martix (order %dx%d) below in order\n\n",arow,acolumn);
    for(i=0;i<arow;i++){
        for(j=0;j<acolumn;j++){
            printf("Enter element of %d,%d position: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

//properties of second matrix
    printf("\n\nEnter order of 2nd matrix in row x column format no need of space in between: ");
    scanf("%dx%d",&brow,&bcolumn);
    while(brow>10 || bcolumn>10){
        printf("oops...maximum possible order is 10 x 10, Enter order again in row x column format no need of space in between: ");
        scanf("%dx%d",&brow,&bcolumn);
    }


    printf("\nEnter elements of 2nd martix (order %dx%d) below in order\n\n",brow,bcolumn);
    for(i=0;i<brow;i++){
        for(j=0;j<bcolumn;j++){
            printf("Enter element of %d,%d position: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //printing entered matrix

     printf("\n\nmatrix 1:\n");
     for(i=0;i<arow;i++){
        for(j=0;j<acolumn;j++){
            printf("%d\t",a[i][j]);
        } 
        printf("\n\n");
     } 

     printf("\n\nmatrix 2:\n");
     for(i=0;i<brow;i++){
        for(j=0;j<bcolumn;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
    }

    //adding matrix and printing if possible
    if(arow==brow && acolumn == bcolumn){
            for(i=0;i<arow;i++){
                for(j=0;j<acolumn;j++){
                    sum[i][j]=a[i][j] + b[i][j];
                }
            }
        printf("\n\nMatrix 1 + matrix 2:\n");
        for(i=0;i<arow;i++){
            for(j=0;j<acolumn;j++){
                printf("%d\t",sum[i][j]);
            }
         printf("\n\n");
       }   
    }
    if(arow!=brow || acolumn!=bcolumn){
        printf("\nMatrices cannot be added\n");
    }

    //multiplying matrix and printing result if possible
    if(acolumn == brow){
        for(i=0;i<arow;i++){
            for(j=0;j<bcolumn;j++){
                for(k=0;k<acolumn;k++){
                    value += (a[i][k]*b[k][j]);
                }
                product[i][j]=value;
                value = 0;
            }
        }
        printf("\n\nMatrix 1 x matrix 2:\n");
        for(i=0;i<arow;i++){
            for(j=0;j<bcolumn;j++){
                printf("%d\t",product[i][j]);
            }
         printf("\n\n");
       }   
    }

    if(bcolumn == arow){
        for(i=0;i<brow;i++){
            for(j=0;j<acolumn;j++){
                for(k=0;k<bcolumn;k++){
                    value += (b[i][k]*a[k][j]);
                }
                product[i][j]=value;
                value = 0;
            }
        }
        printf("\n\nMatrix 2 x matrix 2:\n");
        for(i=0;i<brow;i++){
            for(j=0;j<acolumn;j++){
                printf("%d\t",product[i][j]);
            }
         printf("\n\n");
       }   
    }
    return 0;
}