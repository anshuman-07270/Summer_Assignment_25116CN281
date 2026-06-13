#include<stdio.h>
int main (){
    int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER ARRAY ELEMENTS: ");
   for ( i = 0; i <n; i++){
    
    scanf("%d",&arr[i]);
   }
   printf("\nTHE ENTERED ARRAY IS:");
   for ( i = 0; i <n; i++){
    
    printf("%d ",arr[i]);
   }
   int avg;
   int sum =0;
   for ( i = 0; i <n; i++){
   sum+=arr[i];
   }
    avg=sum/n;
    printf("\nTHE SUM OF GIVEN ARRAY IS: %d",sum);
    printf("\nTHE AVERAGE OF THE GIVEN ARRAY IS: %d",avg);
    return 0;
}