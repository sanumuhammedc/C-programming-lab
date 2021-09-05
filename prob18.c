/*programme to :
i. Create a text file containing 10 sentences
ii. Print the content of the file
iii. Print the number of characters and words in it*/

/*Algorithm
  1)start
  2)open file in write mode
  3)write 10 sentences in that by reading from keyboard
  4)close the file
  5)open it again in read mode
  6)print content of file
  7)close file and open again
  8)count the no of characters and words in that file
  9)print result
  10)stop
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define sen 10 //defines no of sentences to be read

int main(){
    FILE *f = NULL;
    char sentence[10][100];
    char content[100]; // array to print content of file
    int i;
    int chrs=0; //variable for printing no of characters
    int wrds=0; //varible for printing no of words

    //getting sentences from user
    printf("Enter %d sentences to add in text file\n",sen);
    for(i=0;i<sen;i++){
        gets(sentence[i]);
    }

    //opening file
    printf("\nOpening file....\n");
    f = fopen("file.txt","w");
    if(f==NULL){
        printf("Error!!... file can't open\n");
        exit(1);
    }
    printf("===File opened successfully===\n\n");

    //adding data to file
    for(i=0;i<sen;i++){
        fputs(sentence[i],f);
        fputs("\n",f);
    }
     printf("===data written to  file===\n");
     fclose(f);
     printf("Closing file...\n===File closed===\n");

     //opening file
     printf("\nOpening file....\n");
    f = fopen("file.txt","r");
    if(f==NULL){
        printf("Error!!... file can't open\n");
        exit(1);
    }
    printf("===File opened successfully===\n\n");
    //printing content of file
    printf("=== Content of file ===\n\n");
    while(fgets(content,100,f)!= NULL){
        printf("%s",content);
        //getting no of characters
        chrs +=strlen(content);
        //getting no of words
        for(i=0;i<strlen(content);i++){
            if(content[i]==32 || content[i]==48 || content[i] == 10 || content[i]== 9){//added possible situations to identify a word
                wrds++;
            }
        }
    }
    printf("\n\n==============================\n");

    //printing no of words and characters
    printf("\n\nno of words = %d\n",wrds);
    printf("no of characters = %d\n",chrs-sen);
     return 0;
}