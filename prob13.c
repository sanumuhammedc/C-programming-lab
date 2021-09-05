/*program to arrange names in alphabetical order*/

/*
 algorithm
1)start
2)get names from user in any order
3)sort names in alphabetical order using strcmp function
4)print the sorted list of names
5)stop
*/

#include<stdio.h>
#include<string.h>
int main(){
int i,j,n;
char name[100][100],temp[100];

printf("Enter number of names \n");
scanf("%d",&n);
printf("Enter %d names in any order\n",n);
for(i=0;i<n;i++)
{
 scanf("%s",name[i]);
}

//sorting in alphabetical order

for(i=0;i<n-1;i++){

 for(j=i+1;j<n;j++){

   if(strcmp(name[i],name[j])>0)
   {
    strcpy(temp,name[i]);
    strcpy(name[i],name[j]);
    strcpy(name[j],temp);
   }
  
 }

}

//printing alphabetically sorted array

printf("\nThe names in order of alphabets are:\n");
for(i=0;i<n;i++){
 printf("%s\n",name[i]);
}

return 0;
}