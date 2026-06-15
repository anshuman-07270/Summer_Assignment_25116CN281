#include<stdio.h>       
int main (){
    
   int n;
   int i,num;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){ 

    scanf("%d",&arr[i]);
   }
  
  
  printf("\nENTER A NUMBER U WANT TO SEARCH; ");
    scanf("%d",&num);
   int freq= 0;
   for ( i = 0; i <n; i++){    
    
    if (arr[i]==num){
      
       freq++;
    }
     }if(freq!=0){
          printf("\nTHE FREQUENCY OF THE ELEMENT %d IS %d",num,freq);
     }else{
          printf("\nTHE ELEMENT IS NOT FOUND ");
     }

    return 0;
}