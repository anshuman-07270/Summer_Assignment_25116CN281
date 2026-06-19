#include <stdio.h>
int main ()
{  
 int i ,j ;
 int rows ,columns;

 printf("\nENTER NUMBER OF ROWS FOR MATRIX: ");
 scanf("%d",&rows);
 
 printf("\nENTER NUMBER OF COLUMNS FOR MATRIX: ");
 scanf("%d",&columns);

 int ar[rows][columns];

 printf("\nENTER MATRIX ELEMENTS: ");
 for( i = 0 ; i < rows ;i++){

  for( j=0; j< columns;j++){
    scanf("%d",&ar[i][j]);
   }
 } 
   int sum =0;
  for( i = 0 ; i < rows ;i++){

    for( j=0; j< columns;j++){

      if (i == j){

        sum += ar[i][j] ;
     }
   }
 }

   printf("\nGIVEN MATRIX:\n");
   for ( i = 0 ; i <rows ; i++){
    for (j = 0; j <columns ; j++){        

       printf("%d ",ar[i][j]);
      }
    printf("\n");
    }

   printf("\nSUM OF THE DIAGONAL ELEMENTS ARE: %d",sum);
   
      return 0;

}