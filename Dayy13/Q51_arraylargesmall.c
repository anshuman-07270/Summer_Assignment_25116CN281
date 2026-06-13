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
   for ( i = 0; i <n; i++){
    
    printf("%d ",arr[i]);
   } 

    int max = arr[0] ;
    int min = arr[0] ;
      for(i =0;i<n;i++){
    if (arr[i]>max)
     { 
      max=arr[i];
     }
    if (arr[i]<min)
     { 
      min=arr[i];
     }
      
    }
         printf("\nTHE LARGEST ELEMENT OF THE GIVEN ARRAY IS: %d",max);
         printf("\nTHE SMALLEST ELEMENT OF THE GIVEN ARRAY IS: %d",min);
    return 0;
} 
