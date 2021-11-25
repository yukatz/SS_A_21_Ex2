#include <stdio.h>
#include "my_mat.h"
#define true 1
#define false 0

int i,j;

int matrix[10][10];

int main(){
    
    void matrix_menu(void){
        int using = 1;

        while (using)
        {
            printf("A: enter your 10*10 matrix\n");
            printf("B: checking if there a path beetween 2 numbers\n");
            printf("C: calcualting the shortest path beetween 2 numbers\n");
            printf("D: Exit this program\n");

            char choice_of_charcter;//user input choice
            scanf("%c", &choice_of_charcter);//A/B/C/D
            
            switch (choice_of_charcter)//cases 
            {
                case 'A':
                    getting_matrix(matrix);
                    break;

                case 'B':
                    scanf("%d%d", &i, &j);
                    if(matrix[i][j]==0){
                        printf("false\n");}
                    else{
                        printf("true\n");}
                    break;
                    
                case 'C':
                    scanf("%d%d", &i, &j);
                    if(matrix[i][j]==0){
                        printf("%d", -1);
                    }
                    else{
                        printf("%d", matrix[i][j]);
                    }
                    break;
                case 'D':
                    using = 0;  /* This will cause the loop to end */
                    break;

                default:
                    printf("Invalid charcter, please try again.\n");
                    break;
            }
        }
       
    }
     matrix_menu();
    return 0;
    

}
