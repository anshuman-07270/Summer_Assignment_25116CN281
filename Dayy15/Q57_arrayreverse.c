#include<stdio.h>
int main (){
   int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){       
    
    scanf("%d",&arr[i]);
   }
   printf("\nREVERSED ARRAY: ");
   for ( i = n-1; i >=0; i--){    
    
    printf("%d ",arr[i]);   
   }
    return 0;
}