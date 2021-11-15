#include <stdio.h>
#define num 5



struct std{
    char name[50];
    int rollno, chem, phy, math;
    int total;
}std[100],temp;



int main(void){

    printf("Enter the details: ");
    printf("\n\nROLL.NO\t\tNAME\t\tMATHS\t\tPHYSICS\t\tCHEMISTRY\n");



    for(int i=0;i<num;i++)
    {

        scanf("%d %s %d %d %d",&std[i].rollno, std[i].name, &std[i].math, &std[i].phy, &std[i].chem);
        std[i].total = std[i].math + std[i].phy + std[i].chem;

    }







    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-1;j++)
        {
            if(std[j].total < std[j+1].total)
            {
                temp = std[j];
                std[j] = std[j+1];
                std[j+1] = temp;

            }
        }
    }

    printf("\n--------------------------------------------------------------------------------------\nTHE RESULT IS AS FOLLOWS:\n");

    printf("\nS.NO\tROLL.NO\t\tNAME\t\tMATHS\tPHY\tchem\t\tTOTAL");

    for(int i=0;i<num;++i)
    {
        printf("\n%d\t%3d\t\t%s\t\t%2d\t%2d\t%2d\t\t%4d",i+1,std[i].rollno, std[i].name, std[i].math, std[i].phy, std[i].chem, std[i].total);

    }


    return 0;


}
