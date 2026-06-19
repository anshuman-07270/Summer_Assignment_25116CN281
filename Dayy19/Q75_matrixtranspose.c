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
  int arr[columns][rows];
 for (i= 0; i< rows; i++){

    for (j=0 ; j <columns; j++){

      arr[j][i] = ar[i][j];
        
    }
 }
    printf("\nGIVEN MATRIX:\n");
   for ( i = 0 ; i <rows ; i++){
    for (j = 0; j <columns ; j++){        

       printf("%d ",ar[i][j]);
     }
   printf("\n");
 }

  printf("\nTRANSPOSE OF THE GIVEN MATRIX:\n");
  for ( i = 0 ; i <columns ; i++){
    for (j = 0; j <rows ; j++){        

     printf("%d ",arr[i][j]);
   }
   printf("\n");
 }
    return 0;

}
