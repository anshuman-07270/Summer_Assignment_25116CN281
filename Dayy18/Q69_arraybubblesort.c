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
 
 for( i = 0; i<n-1 ;i++){   // i=0; n=6

    for (j =0; j< n-1-i ;j++){

        if (arr[j] > arr[j+1]){   // j= 0 ; n=6               // j=1; n=5;  // j=2; n =4;

          temp =arr[j];      // for j=0; n=6; {3 4 2 5 8 6 7} // {3 2 4 5 8 6 7} // {3 2 4 5 6 8 7}
          arr[j] =arr[j+1];      
          arr[j+1] =temp;        // {3 2 4 5 8 6 7} // {3 2 4 5 6 8 7} // {3 2 4 5 6 7 8} 
        }
    
    }
 }         

 printf("\nSORTED ARRAY: ");
 for( i= 0 ; i<n ; i++){
 
    printf("%d ",arr[i]); 
  }
    return 0;
 
}  