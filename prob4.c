#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float l, b, p, s, s1, s2, s3, area ;
    int choice, flask = 0 ;
    
    while(flask == 0){
        printf("  _____________________________________________________________\n");
        printf("||Enter the number corresponding to shape for calculating area:||\n");
        printf("||1)Rectangle                                                  ||\n");
        printf("||2)Triangle                                                   ||\n");
        printf("||3)Exit                                                       ||\n");
        printf("||_____________________________________________________________||\n");
        printf("\n\nYour choice: ");
        scanf("%d", &choice);

        switch(choice){
                case 1:
                printf("\n\n==============================\n\n");
                printf("Enter length: ");
                scanf("%f", &l);
                printf("\nEnter breadth: ");
                scanf("%f", &b);
                area = l*b;
                printf("\nArea = %f", area);
                printf("\n\n==============================\n");
                break;
                
                case 2:
                printf("\n\n==============================\n\n");
                printf("Enter 1st side length: ");
                scanf("%f", &s1);
                printf("\nEnter 2nd side length: ");
                scanf("%f", &s2);
                printf("\nEnter 3rd side length: ");
                scanf("%f", &s3);
                s = (s1 + s2 + s3)/2;
                p = s*(s-s1)*(s-s2)*(s-s3);
                area = sqrt(p);
                printf("\nArea = %f", area);
                printf("\n\n==============================\n");
                break;

                case 3:
                printf("\n\n======================\n");
                printf("     Thank you        \n");
                printf("======================\n");
                exit(0);
                break;
                
                default:
                printf("\n\n============================================\n");
                printf("oops you have entered wrong choice");
                printf("============================================\n");

            
        }
        printf("\n\n======================\n");
        printf("Enter 0 to continue :\n");
        printf("Enter 1 to Exit :\n");
        printf("Choice: ");
        scanf("%d", &flask);
        printf("======================\n");

    }

    if(flask == 1){
         printf("\n\n======================\n");
         printf("     Thank you        \n");
         printf("======================\n");
    }
    
    return 0;
}

