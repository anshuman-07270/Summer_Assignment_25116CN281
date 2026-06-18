#include<stdio.h>
int main () {
 int i,j,n;
 int temp;
 printf("\nENTER SIZE OF ARRAY: ");
 scanf("%d",&n);
 int arr[n];

 printf("\nENTER ARRAY ELEMENTS: ");
 for( i =0; i<n; i++){
 scanf("%d",&arr[i]);
 }
 
 for( i = 0; i<n-1 ;i++){   

    for (j =0; j< n-1-i ;j++){

        if (arr[j] < arr[j+1]){   

          temp =arr[j];      
          arr[j] =arr[j+1];      
          arr[j+1] =temp;      
         }
    
    }
 }         

 printf("\nSORTED ARRAY: ");
 for( i= 0 ; i<n ; i++){
 
    printf("%d ",arr[i]); 
  }
    return 0;
 
}  