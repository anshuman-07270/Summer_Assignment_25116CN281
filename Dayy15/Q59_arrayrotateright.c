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
    int temp=arr[n-1];

  for (i = n-1;i>0;i--){

    arr[i]=arr[i-1];
  }
  
    arr[0]=temp;
    }
     printf("\nROTATED ARRAY (RIGHT): ");
     for ( i = 0; i <n; i++){       
    
    printf("%d ",arr[i]);
   }
    
    return 0;
}