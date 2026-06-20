#include<stdio.h>
int main () {

 int r1 ,c1 ,r2 ,c2;
 int i,j;
 
 printf("\nENTER NUMBER OF ROWS FOR MATRIX 1: ");
 scanf("%d",&r1);
 
 printf("\nENTER NUMBER OF COLUMNS FOR MATRIX 1: ");
 scanf("%d",&c1);

 printf("\nENTER NUMBER OF ROWS FOR MATRIX 2: ");
 scanf("%d",&r2);
 
 printf("\nENTER NUMBER OF COLUMNS FOR MATRIX 2: ");
 scanf("%d",&c2);

 int ar1[r1][c1] ; 
 int ar2[r2][c2] ;

 printf("\nENTER MATRIX 1 ELEMENTS: ");
 for( i =0; i<r1; i++){

    for (j=0 ; j < c1; j++){
    scanf("%d",&ar1[i][j]);
   }
 }

 printf("\nENTER MATRIX 2 ELEMENTS: ");
 for( i =0; i<r2; i++){

    for (j=0 ; j < c2; j++){
    scanf("%d",&ar2[i][j]);
   }
 } 

  int sum[r1][c2] ;
     
  if (r2 == c1){
   for ( i = 0 ; i < r1 ; i++){

     for ( j = 0 ; j < c2 ; j++){
       sum[i][j] = 0;

        for ( int k = 0 ; k < c1 ; k++){

        sum[i][j] = sum[i][j] +  ( ar1[i][k] * ar2[k][j] ) ; 
       }
         
      }

     }
   }
  
     printf("\nMULTIPLICATION OF THE GIVEN TWO MATRICES IS:\n");
     for (i =0 ; i< r1 ; i++){
       for(j = 0; j < c2; j++){
         
      printf("%d ",sum[i][j]);
       }
       printf("\n");
      }
    return 0; 

 }