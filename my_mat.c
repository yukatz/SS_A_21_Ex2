#include <stdio.h>

  int i,j;
  int matrix[10][10];
  int findMin(int a,int b)
  {
      if(a<b){
          return a;
          
      }
      else {
          return b;
      }
  }
     void claculate_short_path(int matrix[10][10]){
       int k,i,j;
       for(k=0; k<10 ; k++){
         for(i=0;i<10;i++){
           for(j=0;j<10;j++){
               if (matrix[i][j]!=0 && matrix[i][k] !=0 && matrix[k][j] !=0){
                    matrix[i][j] = findMin(matrix[i][k]+ matrix[k][j],matrix[i][j]);}
                if(matrix[i][j]==0 && i!=j && matrix[k][j]!=0 && matrix[i][k] !=0){
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
                }
                   }
                }
             }
          }
          
          
     void getting_matrix(int matrix[10][10]){
        for(i=0;i<10;i++){
          for(j=0;j<10;j++){
            scanf("%d",&matrix[i][j]);
            if(i==j){
                matrix[i][j]=0;
                
            }
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
int checking_path= check_path(matrix,i,j);
if(checking_path == 0){
    return 0;
}
else{
    
    return matrix[i][j];
}
}
