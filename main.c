#include <stdio.h>
#define true 1
#define false 0
int i,j;
int matrix[10][10];
int main(){
void claculate_short_path(int matrix[10][10]){
int k,i,j;
for(k=0; k<=10 ; k++){
 for(i=0;i<=10;i++){
  for(j=0;j<=10;j++){
   if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
}
}
}
}

void getting_matrix(int matrix[10][10]){
   for(i=0;i<10;i++){
    for(j=0;j<10;j++){
     scanf("%d",&matrix[i][j]);
     }
   }
claculate_short_path(matrix);
}
int check_path(int matrix[10][10],int i,int j){
if (matrix[i][j] == 0){
return 0; 
}
else{
return 1  ; 
} 
}

int short_path(int matrix[10][10],int i,int j){
if(check_path == 0){
    return 0;
}
else{
    
    return matrix[i][j];
}
}
void matrix_menu(void)
{
    int using = 1;

    while (using)
    {
        printf("A: enter your 10*10 matrix\n");
        printf("B: checking if there a path beetween 2 numbers\n");
        printf("C: calcualting the shortest path beetween 2 numbers\n");
        printf("D: Exit this program\n");

        char choice_of_charcter;
        scanf(" %c", &choice_of_charcter);

        switch (choice_of_charcter)
        {
        case 'A':
         for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){      
          matrix[i][j] = 0;
        }
      }
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
