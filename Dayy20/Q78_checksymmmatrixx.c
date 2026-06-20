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
 for( i = 0 ; i < rows ; i++){

  for( j=0; j< columns; j++){
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

  int flag =0;
 if (rows == columns){

     
    for ( i = 0 ; i <rows ; i++){
      for (j = 0; j <columns ; j++){        

     if (ar[i][j] != arr[i][j]){
      flag =1;
      break;
    }
   }
  }
 }else{
         printf("\nNOT A SYMMETRIC MATRIX");  // 1 2 3
     }                                         // 2 4 5
                                              // 3 5 6
    if (flag ==0)
    {    
    
    printf("\nSYMMETRIC MATRIX");
    } else{
         printf("\nNOT A SYMMETRIC MATRIX");
     }  
    
    return 0;

}