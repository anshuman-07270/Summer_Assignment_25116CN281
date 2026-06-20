#include <stdio.h>
int main () {

 int rows , columns ;
 int i , j;
 
  printf("\nENTER NUMBER OF ROWS: ");
  scanf("%d",&rows);
  printf("\nENTER NUMBER OF COLUMNS: ");
  scanf("%d",&columns);
  
     int mat[rows][columns];
     printf("\nENTER MATRIX ELEMENTS: ");
   for ( i = 0 ; i < rows ; i++) {
    for( j= 0 ; j < columns ; j++){
     
     scanf("%d",&mat[i][j]);
    }
   }
     printf("\nGIVEN MATRIX:\n");
      for ( i = 0 ; i <rows ; i++){
        for (j = 0; j <columns ; j++){        

       printf("%d ",mat[i][j]);
       }
   printf("\n");
     }

   printf("\nCOLUMN-WISE SUM OF MATRIX ELEMENTS:-\n"); 

   int k = 1;
    for ( i = 0 ; i < columns ; i++) {
     int sum = 0;

    for( j= 0 ; j < rows ; j++){
     
      sum = sum + mat[j][i] ;
    
     }
      printf("COLUMN %d :- %d\n",k,sum);
      k++;
    } 

   return 0 ;

}