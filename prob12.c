/*program to perform string manipulation functions like string concatenations, 
comparison,find the length and string copy without using library functions.*/

/*
algorithm
 1)start
 2)create function for string concatenation
 3)create function for string comparison
 4)create function for finding length of string
 5)create function for copying string
 6)get 2 string from user
 7)pass the strings to crated functions
 8)print output
 9)stop
*/
#include<stdio.h>
int concat();
int compare();
int len();
int copy();
//main function
int main(){
      char str1[100], str2[100];
      int c;

      printf("Enter string 1: ");
      scanf("%s",str1);

      printf("Enter string 2: ");
      scanf("%s",str2);

      //string concatenation
      concat(str1, str2); // calling of concatenation function

      //string comparison
      c = compare(str1,str2); //calling  of string comparison  function
      if(c==0){
            printf("\nStrings are same\n\n");
      }
      if(c==1){
            printf("\nStrings are different\n\n");
      }

      //string length
      len(str1); //calling length function
      len(str2);
      
      //string copying
      printf("\nString copy:\n");
      copy(str1); //calling copy function
      copy(str2);

       return 0;
}


/*
===========================================
             Functions
===========================================
*/
int concat(char str1[],char str2[]){   //function for string concatenation
      char str3[100];
       int i=0,j=0;

      while(str1[j] != '\0'){
            str3[i]=str1[j];
            i++;
            j++;
      }

      j=0;

       while(str2[j] != '\0'){
            str3[i]=str2[j];
            i++;
            j++;
      }

      str3[i]='\0';

       printf("\n\nConcatenated string: %s\n", str3);
       return 0;
}

int compare(char str1[], char str2[]){  //function for string comparison  
      int i=0,flag=0;
      while (str1[i]!='\0' && str2[i]!='\0'){
            if(str1[i]!=str2[i]){
                  flag=1;
                  break;
            }
            i++;
      }
      
     return flag; 
}

int len(char str1[]){  //function for string length
      
      int i, j;

      for(i=0 ; str1[i] != '\0' ; i++);
      printf("Length of string %s = %d\n",str1,i);

      /*for(j=0 ; str2[j] != '\0' ; j++);
      printf("Length of string 2= %d\n",j);*/
      
      return 0;
}

int copy(char str[]){  //function for string copy
      
      char copy[100];
      int i;

      for(i=0;str[i] != 0;i++){
            copy[i]=str[i];
      }
      copy[i] = '\0';
      printf("Copied string = %s\n", copy);
      return 0;
}