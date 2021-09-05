/*total marks, out of 500, scored by 53 students of a class are available.
Write a programme to read the marks into an array using pointers. Search the
array to find out the number of candidates who scored greater than or equal
to the class average. You should access the elements of the array using pointers.
(ie., you are not allowed to use subscripts)*/

/*Algorithm
  1)start
  2)let name be an intiger array having 53 components
  3)read values into the array
  4)calculate sum and average
  5)count no of scored greater than or equal to class avg
  6)print result
  7)stop
*/

#include <stdio.h>
#define students_no 53
int main(){
    int i,sum=0,flag=0;
    int name[students_no];
    int *p = &name[0];
    printf("Enter total marks of %d students out of 500: \n",students_no);
    //reading marks into array using pointers 
    for(i=0;i<students_no;i++){
        scanf("%d",p+i);
        while(*(p+i) > 500){
            printf("entered value is more then 500, try again\n");
            scanf("%d",p+i);
        }
    }

    //finding class average using pointers
    for(i=0;i<students_no;i++){
        sum += *(p+i);
    }
    float average=sum/students_no;

    //searching of array to find no of students scored >= class avg
     for(i=0;i<students_no;i++){
        if(*(p+i) >= average){
            flag++;
        }
    }

    //printing no of students scored >= class avg
    printf("\n\nNo of students scored greater than or equal to class avg = %d\n",flag);
    return 0;
}