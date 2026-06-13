#include<stdio.h>
void main (){
   int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER ARRAY ELEMENTS: ");
   for ( i = 0; i <n; i++){
    
    scanf("%d",&arr[i]);
   }
   for ( i = 0; i <n; i++){
    
    printf("%d ",arr[i]);
   
}
      
 int even=0;
 int odd=0;
  for ( i = 0; i <n; i++){
 if (arr[i]%2==0){
    even++;
 }else{
    odd++;
  }
 }
     printf("\nTHE NUMBER OF ELEMENTS WHICH ARE EVEN IS: %d",even);
     printf("\nTHE NUMBER OF ELEMENTS WHICH ARE ODD IS: %d",odd);
     return 0;
}