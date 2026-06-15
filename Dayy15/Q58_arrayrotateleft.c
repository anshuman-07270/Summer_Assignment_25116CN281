#include<stdio.h>
int main (){
   int n;
   int i,posi;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){       
    
    scanf("%d",&arr[i]);
   }
    printf("\nenter a psition: ");
    scanf("%d",&posi);

     posi=posi%n;

    for (int j = 0;j <posi; j++)
    {
    int temp=arr[0];

  for (i = 0;i<n-1;i++){

    arr[i]=arr[i+1];
  }
  
    arr[n-1]=temp;
    }
     printf("\nROTATED ARRAY (LEFT): ");
     for ( i = 0; i <n; i++){       
    
    printf("%d ",arr[i]);
   }
    
    return 0;
}