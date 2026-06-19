#include<stdio.h>
int main () {

 int rows ,columns;
 int i,j;
 
 printf("\nENTER NUMBER OF ROWS FOR MATRICES: ");
 scanf("%d",&rows);
 
 printf("\nENTER NUMBER OF COLUMNS FOR MATRICES: ");
 scanf("%d",&columns);


 int ar1[rows][columns] ; 
 int ar2[rows][columns] ;

 printf("\nENTER matrix 1 ELEMENTS: ");
 for( i =0; i<rows; i++){

    for (j=0 ; j < columns; j++){
    scanf("%d",&ar1[i][j]);
   }
 }

 printf("\nENTER matrix 2 ELEMENTS: ");
 for( i =0; i<rows; i++){

    for (j=0 ; j < columns; j++){
    scanf("%d",&ar2[i][j]);
   }
 }
 int sub[rows][columns];

    for( i =0; i<rows; i++){

      for (j=0 ; j < columns; j++){
     
        sub[i][j] = ar1[i][j] - ar2[i][j] ;

    }
  }

    printf("\nRESULTANT MATRIX AFTER SUBTRACTION:\n");
 for( i =0; i<rows; i++){

    for (j=0 ; j < columns; j++){
    printf("%d ",sub[i][j]);
   }
   printf("\n");
  }
   return 0;
 
}