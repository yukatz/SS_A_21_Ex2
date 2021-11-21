#include <stdio.h>
#define true 1
#define false 0
#define n 10
void getting_matrix(int matrix[10][10]){
    int i,j;
for(i=0;i<2;i++)
  for(j=0;j<2;j++){
  scanf("%d",&matrix[i][j]);
  } 
}
int check_path(int matrix[10][10]){
    int k,i,j;
int result=0;
for(k=0; k<=10 ; k++)
 for(i=0;i<=10;i++)
  for(j=0;j<=10;j++){
     if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
  }
result= matrix[i][j];                    
if (result > 0){
return 1; 
}
else{
return 0  ; 
} 
}
void claculate_short_path(int matrix[10][10]){
int k,j,i;
int result=0;
for(k=0; k<=10 ; k++)
 for(i=1;i<=10;i++)
  for(j=1;j<=10;j++)
   if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
result= matrix[i][j];
printf("%d" , result);   
}
