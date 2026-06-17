#include<stdio.h>
int main(){

   int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){       
    
    scanf("%d",&arr[i]);
   }

  int start =arr[0];
  int end =arr[n-1];

  printf("\nMISSING ELEMENT FROM ARRAY IS: ");
   for ( i = 0; i <n; i++){    
    
    if (arr[i]!=start){

   printf("%d ",start); 
   break;
     
    }
        start++;
    
    
   }
    return 0;


}
