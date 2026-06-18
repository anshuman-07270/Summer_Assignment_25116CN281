#include<stdio.h>
int main () {
 int i,j,n;
 int temp;

 printf("\nENTER SIZE OF ARRAY: ");
 scanf("%d",&n);

 int arr[n];
 int min ;

 printf("\nENTER ARRAY ELEMENTS: ");
 for( i =0; i<n; i++){
 scanf("%d",&arr[i]);
 }

   for (i=0 ; i <= n-1 ; i++){

      min =i;
      for ( j = i+1 ; j <= n-1 ; j++){  

        if (arr[j] < arr[min]){

        temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
        }
      }
    }

    printf("\nSORTED ARRAY: ");
    for (i = 0; i < n; i++) {
    
    printf("%d ",arr[i]);
    }
    
 return 0;

}