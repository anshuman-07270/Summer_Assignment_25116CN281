#include<stdio.h>
int main (){
   int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){       // input an array
    
    scanf("%d",&arr[i]);
   }
   for ( i = 0; i <n; i++){    // displaying that array
    
    printf("%d ",arr[i]);   
   }
    return 0;
}