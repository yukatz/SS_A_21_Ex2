#include <stdio.h>
#include "my_mat.h"

int i,j;

int matrix[10][10];

int main(void){
    
        int using = 1;

        while (using)
        {
           
            char choice_of_charcter;//user input choice
            scanf(" %c", &choice_of_charcter);//A/B/C/D
            
            switch (choice_of_charcter)//cases 
            {
                case 'A':
                    getting_matrix(matrix);
                    break;

                case 'B':
                    scanf("%d%d", &i, &j);
                    if(check_path(matrix,i,j)==0){
                        printf("false\n");}
                    else{
                        printf("true\n");}
                    break;
                    
                case 'C':
                    scanf("%d%d", &i, &j);
                    if(short_path(matrix,i,j)==0){
                        printf("%d\n", -1);
                    }
                    else{
                        printf("%d\n", short_path(matrix,i,j));
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
       
    

    return 0;
}
