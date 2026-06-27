#include<stdio.h>
int main(){

 
 int n1 , n2 ;


 printf("\nEnter the size of array 1: ");
 scanf ("%d",&n1);

 printf("\nEnter the size of array 2: ");
 scanf("%d",&n2);

 int arr1[n1] , arr2[n2] ;
 int arr3[n1+n2];

 printf("\nEnter array 1 Elements: "); 
 for( int i = 0; i < n1 ; i++){
 scanf("%d",&arr1[i]);
 }
 
 printf("\nEnter array 2 Elements: ");
 for(int i = 0; i < n2 ; i++){
 scanf("%d",&arr2[i]);
 }

 int i =0 , j = 0 , k = 0;

 while( i < n1 && j < n2){
 
 if(arr1[i] > arr2[j]){
    arr3[k] = arr2[j];
    j++;

   }else{
    arr3[k] =arr1[i];
    i++;
   }
  k++;
  }

 while( i < n1){
    arr3[k] =arr1[i];
    i++;
    k++;
    }
  
 while( j < n2){
    arr3[k] =arr2[j];
    j++;
    k++;
    }

   printf("\nSORTED ARRAY: ");
   for( i = 0; i < n1+n2 ; i++){
   printf("%d ",arr3[i]);
   }

   return 0;
}